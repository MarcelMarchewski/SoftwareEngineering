#pragma once

#include "../SharedSystems/Task.h"
#include <iostream>

/// <summary>
/// Task 1: Simple Functions with Parameters
/// </summary>
class TaskOne : public Task
{
	public:
		int ID() override
		{
			return 1;
		}

		int addTwoNumbers(int a, int b) 
		{
			return a + b;
		}

		void DoTask() override
		{
			for (int i = 0; i < 5; i++) 
			{
				std::cout << "Sum " << i + 1 << ": " << addTwoNumbers(5, i) << "\n";
			}
		}
};