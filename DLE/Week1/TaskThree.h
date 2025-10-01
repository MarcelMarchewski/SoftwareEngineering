#pragma once

#include "../SharedSystems/Task.h"
#include <iostream>

// Declare and initialise the global variable
int glob = 0;

/// <summary>
/// Task 3: Variable Scope and Lifetime
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
			// Call the recursive function to observe the behaviour of each type of variable
			RecursiveIncrement();
		}

		void RecursiveIncrement(int depth = 0) 
		{
			// Declare and initialise the local variable
			int loc = 0;

			// Declare and initialise the static variable
			static int stat = 0;

			// Increment each variable
			glob++;
			stat++;
			loc++;

			// Output the values of each variable to the user
			std::cout << "Iteration " << depth + 1 << ":\n\nGlobal: " << glob << "\nStatic: " << stat << "\nLocal: " << loc << "\n\n";

			// Increment the depth count to progress the recursion
			depth++;

			// Check if recursion has reached the target limit, then stop recursion if true
			if (depth == 3) 
			{
				return;
			}

			// Perform recursion at a new depth value
			RecursiveIncrement(depth);
		}
};