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
			system("cls");

			int loc = 0;

			glob++;
			loc++;

			std::cout << "Iteration " << depth << ":\n\nGlobal: " << glob << "\nStatic: " << "\nLocal: " << loc;

			depth++;

			if (depth == 3) 
			{
				return;
			}

			RecursiveIncrement(depth);
		}
};