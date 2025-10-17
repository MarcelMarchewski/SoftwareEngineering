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

		int Sum(int arr[], int size)
		{
			// Calculate sum of all elements in array
			int result = 0;

			for (int i = 0; i < size; i++) 
			{
				result += arr[i];
			}

			return result;
		}

		void DoTask() override
		{
			// Declare empty array with 10 spaces
			int arr[10];

			// Populate array with numbers 1-10
			for (int i = 0; i < 10; i++) 
			{
				arr[i] = i + 1;
			}

			// Get sum of array
			int sum = Sum(arr, 10);

			// Output sum and average
			std::cout << "Sum: " << sum << "\nAverage: " << sum / 10;
		}
};