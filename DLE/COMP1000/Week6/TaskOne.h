#pragma once

#include "../SharedSystems/Task.h"
#include <iostream>
#include <fstream>
#include <iomanip>

/// <summary>
/// Task 1: Writing Data to Files Using ofstream
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
			std::ofstream dataStream("taskOneData.txt");

			if (!dataStream.is_open()) 
			{
				return;
			}

			dataStream << std::setw(20) << "String datatype\n";
			dataStream << 5 << "\n";
			dataStream << std::setprecision(4) << 5.59475982364f << "\n";

			dataStream.close();
		}
};