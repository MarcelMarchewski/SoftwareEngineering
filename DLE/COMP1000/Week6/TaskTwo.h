#pragma once

#include "../SharedSystems/Task.h"
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

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

				dataStream << "String\n";
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

			std::string dataString;
			int dataInt;
			float dataFloat;
			std::string fullLineDataString;

			dataStreamRead >> dataString;
			dataStreamRead >> dataInt >> dataFloat;

			dataStreamRead.seekg(2, std::ifstream::cur);

			std::getline(dataStreamRead, fullLineDataString);

			std::cout << "String: " << dataString << "\nInt: " << dataInt << "\nFloat: " << dataFloat << "\nFull line string: " << fullLineDataString;

			dataStreamRead.close();
		}
};