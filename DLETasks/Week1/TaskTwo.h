#pragma once

#include "Task.h"
#include <iostream>

class TaskTwo : public Task 
{
	public:
		int ID() override
		{
			return 2;
		}

		void DoTask() override
		{
			int numOne;
			int numTwo;

			std::cout << "Input the first number: ";
			std::cin >> numOne;

			std::cout << "\nInput the second number: ";
			std::cin >> numTwo;

			std::cout << "\n\nAddition: " << numOne + numTwo << "\nSubtraction: " << numOne - numTwo << "\nMultiplication: " << numOne * numTwo << "\nDivision: " << numOne / numTwo << "\nModulus: " << numOne % numTwo;
		}
};