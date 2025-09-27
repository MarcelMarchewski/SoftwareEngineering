#pragma once

#include "Task.h"
#include <iostream>

int glob = 0;

class TaskThree : public Task 
{
	public:
		int ID() override 
		{
			return 3;
		}

		void DoTask() override 
		{
			RecursiveIncrement(0);
		}

		void RecursiveIncrement(int depth = 1) 
		{
			int loc = 0;

			static int stat = 0;

			glob++;
			stat++;
			loc++;

			std::cout << "Iteration " << depth + 1 << ":\n\nGlobal: " << glob << "\nStatic: " << stat << "\nLocal: " << loc << "\n\n";

			depth++;

			if (depth == 3) 
			{
				return;
			}

			RecursiveIncrement(depth);
		}
};