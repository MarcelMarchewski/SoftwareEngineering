#pragma once

#include "../SharedSystems/Task.h"
#include <iostream>
#include <fstream>
#include <iomanip>
#include <sstream>

/// <summary>
/// Task 1: Basic CSV File Parsing
/// </summary>
class TaskOne : public Task
{
	public:
		int ID() override
		{
			return 1;
		}

		void DoTask() override
		{
			std::ifstream dataStreamRead("data.csv");
			std::string line, value;

			while (std::getline(dataStreamRead, line)) 
			{
				std::istringstream stringStream(line);

				std::string prefixes[3] = { "Name: ", "Age: ", "City: " };
				int i = 0;

				while (std::getline(stringStream, value, ','))
				{
					std::cout << prefixes[i] << value << "\t";

					i++;
				}

				std::cout << "\n";
			}
		}
};