#pragma once

#include "../SharedSystems/Task.h"
#include <iostream>

/// <summary>
/// Task 2: Function with Return Type and Parameter Passing by Reference
/// </summary>
class TaskTwo : public Task
{
	public:
		int ID() override
		{
			return 2;
		}

		void swapNumbers(int& a, int& b) 
		{
			int tmp = a;

			a = b;

			b = tmp;

			std::cout << "A: " << a << "\nB: " << b;
		}

		void DoTask() override
		{
			int a = 5;
			int b = 10;

			std::cout << "A: " << a << "\nB: " << b << "\n\n";

			swapNumbers(a, b);
		}
};