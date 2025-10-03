#pragma once

#include "../SharedSystems/Task.h"
#include <iostream>

/// <summary>
/// Task 5: Create a multiplication table with nested loops
/// </summary>
class TaskFive : public Task
{
	public:
		int ID() override
		{
			return 5;
		}

		void DoTask() override
		{
			// Iterate along the Y axis 10 times
			for (int y = 0; y < 10; y++) 
			{
				// Iterate along the X axis 10 times
				for (int x = 0; x < 10; x++) 
				{
					// Output the multiplication result at this coordinate
					std::cout << (x + 1) * (y + 1) << "\t";
				}

				// Start a new line
				std::cout << "\n";
			}
		}
};