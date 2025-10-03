#pragma once

#include "../SharedSystems/Task.h"
#include <iostream>

/// <summary>
/// Task 1: Writing a for loop
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
			// Increment the 'i' local variable until the loop's code has executed 10 times
			for (int i = 0; i < 10; i++) 
			{
				// Output the next 'natural number'
				std::cout << i + 1 << "\n";
			}
		}
};