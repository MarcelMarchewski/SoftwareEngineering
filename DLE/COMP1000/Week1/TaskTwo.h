#pragma once

#include "../SharedSystems/Task.h"
#include <iostream>

/// <summary>
/// Task 2: Arithmetic Operations with User Input
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
			// Declare operation target variables
			int numOne;
			int numTwo;

			// Gather user input and assign value to operation targets
			std::cout << "Input the first number: ";
			std::cin >> numOne;

			std::cout << "\nInput the second number: ";
			std::cin >> numTwo;

			// Perform each operation and output results to user
			std::cout << "\n\nAddition: " << numOne + numTwo << "\nSubtraction: " << numOne - numTwo << "\nMultiplication: " << numOne * numTwo << "\nDivision: " << numOne / numTwo << "\nModulus: " << numOne % numTwo;
		}
};