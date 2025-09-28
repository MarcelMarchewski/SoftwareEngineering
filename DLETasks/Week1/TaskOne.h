#pragma once

#include "Task.h"
#include <iostream>

/// <summary>
/// Task 1: Declaring and Initialising Variables
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
			// Declare and initialise each variable
			int age = 19;
			float height = 1.84f;
			char grade = toupper('a');
			std::string name = "Dave";

			// Output the value of each variable
			std::cout << name << ":\nAge: " << age << "\nHeight: " << height << "\nGrade: " << grade << "\n\n";

			// Modify the value of each variable
			age = 18;
			height = 1.79f;
			grade = toupper('b');
			name = "Steve";

			// Output the modified values of each variable
			std::cout << name << ":\nAge: " << age << "\nHeight: " << height << "\nGrade: " << grade << "\n\n";
		}
};