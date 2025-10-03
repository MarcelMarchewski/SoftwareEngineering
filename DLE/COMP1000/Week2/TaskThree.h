#pragma once

#include "../SharedSystems/Task.h"
#include <iostream>

/// <summary>
/// Task 3: Using nested loops
/// </summary>
class TaskThree : public Task
{
	public:
		int ID() override
		{
			return 3;
		}

		void DoTask() override
		{
			// Perform 5 iterations of the topmost loop
			for (int y = 0; y < 5; y++) 
			{
				// Perform 1 more iteration each time y increments
				for (int x = 0; x < y + 1; x++) 
				{
					// Output a pattern element
					std::cout << "*";
				}

				// Start a new line for the next iteration
				std::cout << "\n";
			}
		}
};