#pragma once

#include "../SharedSystems/Task.h"
#include <iostream>

/// <summary>
/// Task 5: Static Local Variables in Functions
/// </summary>
class TaskFive : public Task
{
	public:
		int ID() override
		{
			return 5;
		}

		void trackFunctionCalls() 
		{
			static int loc = 0;

			loc++;

			std::cout << "Counter: " << loc << "\n";
		}

		void DoTask() override
		{
			trackFunctionCalls();
			trackFunctionCalls();
			trackFunctionCalls();
			trackFunctionCalls();
			trackFunctionCalls();
		}
};