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
			std::string a = "String A, ";
			std::string b = "String B";

			std::string c = a + b;

			std::cout << "Before operations: " << a << b << "\nAfter operations: " << c;
			std::cout << "String length: " << c.length();
			
			// todo: compare strings
		}
};