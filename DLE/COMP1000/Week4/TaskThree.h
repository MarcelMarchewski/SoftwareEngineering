#pragma once

#include "../SharedSystems/Task.h"
#include <iostream>

/// <summary>
/// Task 3: Simple Calculator Using Switch Case
/// </summary>
class TaskThree : public Task
{
	public:
		int ID() override
		{
			return 3;
		}

		void DoTask() override
		{
			// Declare empty array
			int num[2];

			// Populate array with user input
			for (int i = 0; i < 2; i++) 
			{
				std::cout << "Enter number " << i + 1 << ": ";

				std::cin >> num[i];
			}

			// Declare user input variable
			int operation;

			// Prompt user and take input
			std::cout << "\nChoose an operation (1 = Addition, 2 = Subtraction, 3 = Multiplication, 4 = Division): ";

			std::cin >> operation;

			// Branch for each operation number
			switch (operation) 
			{
				case (1): 
				{
					std::cout << "\nAddition result: " << num[0] + num[1];

					break;
				}

				case (2):
				{
					std::cout << "\nSubtraction result: " << num[0] - num[1];

					break;
				}

				case (3):
				{
					std::cout << "\nMultiplication result: " << num[0] * num[1];

					break;
				}

				case (4):
				{
					std::cout << "\nDivision result: " << num[0] / num[1];

					break;
				}
			}
		}
};