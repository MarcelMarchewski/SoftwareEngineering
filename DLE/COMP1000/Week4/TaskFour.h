#pragma once

#include "../SharedSystems/Task.h"
#include <iostream>

/// <summary>
/// Task 4: Switch Case for Menu Selection
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
			// Declare and initialise constant size variable
			const int SIZE = 5;

			// Declare and initialise array with 5 values
			int arr[SIZE] = {1, 2, 3, 4, 5};

			// Declare and initialise pointer to array
			int *arrPtr = arr;

			// Output value of each array element with pointer arithmetic
			for (int i = 0; i < SIZE; i++) 
			{
				std::cout << "Array element " << i + 1 << ": " << *arrPtr + i << "\n";
			}

			std::cout << "\n";

			// Modify value of each array element with pointer arithmetic then output them
			for (int i = 0; i < SIZE; i++) 
			{
				arrPtr[i] += 2;

				std::cout << "Modified Array element " << i + 1 << ": " << *arrPtr + i << "\n";
			}
		}
};