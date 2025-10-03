#pragma once

#include "../SharedSystems/Task.h"
#include <iostream>

/// <summary>
/// Task 4: Handling user input in a Do-While loop
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
			// Declare user input variable
			int userInput;

			do
			{
				// Ask for user input, update variable and clear space for next prompt
				std::cout << "Provide a positive number to exit: ";

				std::cin >> userInput;

				std::cout << "\n";
			} 
			
			// Continue iterating until user provides positive integer
			while (userInput < 0);
		}
};