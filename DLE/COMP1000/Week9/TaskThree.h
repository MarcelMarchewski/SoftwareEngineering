#pragma once

#include "../SharedSystems/Task.h"
#include <iostream>
#include <iomanip>

/// <summary>
/// Task 3: Using Constructors and Destructors
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
			
		}
};