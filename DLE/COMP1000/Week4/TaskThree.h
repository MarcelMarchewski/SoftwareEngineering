#pragma once

#include "../SharedSystems/Task.h"
#include <iostream>

/// <summary>
/// Task 3: Pointer Basics
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
			// Declare and initialise integer
			int num = 10;

			// Declare and initialise pointer to the num variable
			int* numPtr = &num;

			// Output the value of num via pointer
			std::cout << "Variable value from pointer: " << *numPtr;

			// Set value of num via pointer
			*numPtr = 15;

			// Output updated value of num via pointer
			std::cout << "\nVariable updated value from pointer: " << *numPtr;
		}
};