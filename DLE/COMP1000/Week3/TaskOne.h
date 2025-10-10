#pragma once

#include "../SharedSystems/Task.h"
#include <iostream>

/// <summary>
/// Task 1: Simple If-Else Condition
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
			// Declare user input variable
			int age;

			// Prompt user and take input
			std::cout << "How old are you? ";

			std::cin >> age;

			// Branch depending on the provided value
			if (age >= 18) 
			{
				std::cout << "You are eligible to vote.";
			}

			else 
			{
				std::cout << "You are not eligible to vote.";
			}
		}
};