#pragma once

#include "Task.h"
#include <iostream>

class TaskFour : public Task
{
	public:
		int ID() override
		{
			return 4;
		}

		void DoTask() override
		{
			int numOne;
			int numTwo;

			std::cout << "Enter the first number: ";

			std::cin >> numOne;

			std::cout << "\nEnter the second number: ";

			std::cin >> numTwo;

			std::cout << "\n\nResult without type casting (integer division): " << numOne / numTwo;
			std::cout << "\nResult with type casting (float division): " << numOne / static_cast<float>(numTwo);
		}
};