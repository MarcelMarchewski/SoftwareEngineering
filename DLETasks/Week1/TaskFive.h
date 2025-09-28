#pragma once

#include "Task.h"
#include <iostream>
#include <list>

/// <summary>
/// Task 5: Complex Arithmetic Expression and Precedence
/// </summary>
class TaskFive : public Task
{
	public:
		int ID() override
		{
			return 5;
		}

		void DoTask() override
		{
			// Declare an empty array for storing user inputted values
			int opTargets[6];

			// Iterate 6 times in order to populate each array element with user inputted values
			for (int i = 0; i < 6; i++) 
			{
				int next;

				std::cout << "Enter number " << i + 1 << ": ";

				std::cin >> next;

				std::cout << "\n";

				opTargets[i] = next;
			}

			// Output 2 results: one without any parentheses, another with parentheses to demonstrate the impact of precedence on arithmetic operations
			std::cout << "\nWithout parentheses: " << opTargets[0] * opTargets[1] % opTargets[2] - opTargets[3] / opTargets[4] + opTargets[5];
			std::cout << "\nWith parentheses: " << ((opTargets[0] * opTargets[1]) % opTargets[2]) - (opTargets[3] / (opTargets[4] + opTargets[5]));
		}
};