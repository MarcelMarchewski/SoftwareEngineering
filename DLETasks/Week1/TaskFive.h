#pragma once

#include "Task.h"
#include <iostream>
#include <list>

class TaskFive : public Task
{
	public:
		int ID() override
		{
			return 5;
		}

		void DoTask() override
		{
			int opTargets[6];

			for (int i = 0; i < 6; i++) 
			{
				int next;

				std::cout << "Enter number " << i + 1 << ": ";

				std::cin >> next;

				std::cout << "\n";

				opTargets[i] = next;
			}

			std::cout << "\nWithout parentheses: " << opTargets[0] * opTargets[1] % opTargets[2] - opTargets[3] / opTargets[4] + opTargets[5];
			std::cout << "\nWith parentheses: " << ((opTargets[0] * opTargets[1]) % opTargets[2]) - (opTargets[3] / (opTargets[4] + opTargets[5]));
		}
};