#pragma once

#include "../SharedSystems/Task.h"
#include <iostream>

/// <summary>
/// Task 5: Pointer to String and Memory Allocation
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
			// Declare and initialise constant size variable
			const int SIZE = 20;

			// Declare a dynamically allocated array
			char* string = new char[SIZE];

			// Prompt user
			std::cout << "Provide a string: ";

			// Clear input buffer, then take input
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cin.getline(string, SIZE);

			// Output user string and length
			std::cout << "\nGiven string: " << string << "\nLength: " << strlen(string);

			// Deallocate memory
			delete[] string;
		}
};