#pragma once

#include "../SharedSystems/Task.h"
#include <iostream>

/// <summary>
/// Task 2: Implementing a while loop
/// </summary>
class TaskTwo : public Task
{
	public:
		int ID() override
		{
			return 2;
		}

		void DoTask() override
		{
			// Declare and initialise user input variable
			int userInput = 0;

			// Run the loop until the user provides a negative value
			while (userInput >= 0) 
			{
				// Ask for user input, update variable and clear space for next prompt
				std::cout << "Provide a negative number to exit: ";

				std::cin >> userInput;

				std::cout << "\n";
			}
		}
};