#pragma once

#include "../SharedSystems/Task.h"
#include <iostream>

/// <summary>
/// Task 2: Grading System using Else-If Ladder
/// </summary>
class TaskTwo : public Task
{
	public:
		int ID() override
		{
			return 2;
		}

		void DoTask() override
		{
			// Declare user input variable
			int mark;

			// Prompt user and take input
			std::cout << "Enter exam marks: ";

			std::cin >> mark;

			// Branch depending on if the marks fit within a specific boundary
			if (mark >= 90) 
			{
				std::cout << "Grade A";
			}

			else if (mark >= 80) 
			{
				std::cout << "Grade B";
			}

			else if (mark >= 70)
			{
				std::cout << "Grade C";
			}

			else if (mark >= 60)
			{
				std::cout << "Grade D";
			}

			else 
			{
				std::cout << "Grade F";
			}
		}
};