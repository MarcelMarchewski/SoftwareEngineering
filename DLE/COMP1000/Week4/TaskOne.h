#pragma once

#include "../SharedSystems/Task.h"
#include <iostream>

/// <summary>
/// Task 1: Array Initialization and Manipulation
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
			int arr[10];

			for (int i = 0; i < 10; i++) 
			{
				arr[i] = i + 1;
			}

			int sum = 0;

			for (int i : arr) 
			{
				sum += i;
			}

			std::cout << "Sum: " << sum << "\nAverage: " << sum / 10;
		}
};