#pragma once

#include "../SharedSystems/Task.h"
#include <iostream>
#include <fstream>
#include <iomanip>

#define TARGET_FILE "taskFourData.txt"

/// <summary>
/// Task 4: Handling File I/O Errors and Stream Flags
/// </summary>
class TaskFour : public Task
{
	public:
		int ID() override
		{
			return 4;
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
			std::ofstream _targetStreamWrite(TARGET_FILE, std::ofstream::out, std::ofstream::trunc);

			for (int i = 0; i < 10; i++) 
			{
				_targetStreamWrite << "Value: " << i + 1 << "\n";
			}

			_targetStreamWrite.close();

			std::ifstream _targetStreamRead(TARGET_FILE);

			while (_targetStreamRead.eofbit == 1) 
			{
				char _out[20];

				_targetStreamRead.getline(_out, 20);

				std::cout << _out;
			}

			_targetStreamRead.close();
		}
};