#pragma once

#include "../SharedSystems/Task.h"
#include <iostream>
#include <fstream>
#include <iomanip>

/// <summary>
/// Task 2: Reading Data from Files Using ifstream
/// </summary>
class TaskTwo : public Task
{
	public:
		int ID() override
		{
			return 2;
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
			if (!fileExists("taskTwoData.txt")) 
			{
				std::ofstream dataStream;
				dataStream.open("taskTwoData.txt");

				dataStream << "String data\n";
				dataStream << 10 << "\n";
				dataStream << 10.595823 << "\n";
				dataStream << "Full line: " << 20 << " data";

				dataStream.close();
			}

			std::ifstream dataStreamRead("taskTwoData.txt");

			if (!dataStreamRead.is_open()) 
			{
				return;
			}

			std::string line;

			while (dataStreamRead.getline(line)) 
			{

			}

			dataStreamRead.close();
		}
};