#pragma once

#include "../SharedSystems/Task.h"
#include <iostream>

/// <summary>
/// Task 4: Type Casting and Conversion
/// </summary>
class TaskFour : public Task
{
	public:
		int ID() override
		{
			return 4;
		}

		void DoTask() override
		{
			// Declare operation target variables
			int numOne;
			int numTwo;

			// Gather user input and assign value to operation targets
			std::cout << "Enter the first number: ";
			std::cin >> numOne;

			std::cout << "\nEnter the second number: ";
			std::cin >> numTwo;

			// Output two results: one without type casting, another with type casting
			std::cout << "\n\nResult without type casting (integer division): " << numOne / numTwo;
			std::cout << "\nResult with type casting (float division): " << numOne / static_cast<float>(numTwo);
		}
};