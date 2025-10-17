#pragma once

#include "../SharedSystems/Task.h"
#include <iostream>

/// <summary>
/// Task 2: String Operations
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
			// Declare and initialise strings
			std::string a = "String A, ";
			std::string b = "String B";

			// Concatenate strings
			std::string c = a + b;

			// Output original and concatenated strings, then the length of the final string
			std::cout << "Before operations: " << a << b << "\nAfter operations: " << c;
			std::cout << "\nString length: " << c.length();
			
			// Check if a and b are equal
			switch (a.compare(b)) 
			{
				case (0): 
				{
					std::cout << "\nString comparison matched";
					break;
				}

				default: 
				{
					std::cout << "\nString comparison did not match";
					break;
				}
			}
		}
};