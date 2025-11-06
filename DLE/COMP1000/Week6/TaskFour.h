#pragma once

#include "../SharedSystems/Task.h"
#include <iostream>

/// <summary>
/// Task 4: Function Scope – Local vs Global Variables
/// </summary>
class TaskFour : public Task
{
	public:
		int counter = 0;

		int ID() override
		{
			return 4;
		}

		void DoTask() override
		{
			
		}
};