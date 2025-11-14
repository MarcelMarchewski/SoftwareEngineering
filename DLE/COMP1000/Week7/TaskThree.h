#pragma once

#include "../SharedSystems/Task.h"
#include <iostream>
#include <fstream>
#include <iomanip>

#define SOURCE_FILE "taskThreeSource.txt"
#define DESTINATION_FILE "taskThreeDestination.txt"

/// <summary>
/// Task 3: File Copy Using Character-Level Operations
/// </summary>
class TaskThree : public Task
{
	public:
		int ID() override
		{
			return 3;
		}

		bool fileExists(const std::string& fName)
		{
			std::ifstream file(fName);

			bool exists = file.good();

			file.close();

			return exists;
		}

		void DoTask() override
		{
			if (!fileExists(SOURCE_FILE)) 
			{
				std::ofstream _sourceStream;

				_sourceStream.open(SOURCE_FILE);

				_sourceStream << "Lorem Ipsum\n";
				_sourceStream << "Hello World\n";
				_sourceStream << "yo";

				_sourceStream.close();
			}

			if (!fileExists(DESTINATION_FILE)) 
			{
				std::ofstream _destinationStream;

				_destinationStream.open(DESTINATION_FILE);

				_destinationStream.close();
			}

			std::ifstream _sourceStream(SOURCE_FILE);
			std::ofstream _destinationStream(DESTINATION_FILE, std::ofstream::out, std::ofstream::trunc);

			while (!_sourceStream.eof())
			{
				int next = _sourceStream.get();

				if (next == -1) 
				{
					break;
				}

				_destinationStream << (char) next;
			}

			_sourceStream.close();
			_destinationStream.close();
		}
};