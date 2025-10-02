#pragma once

#include "../SharedSystems/Task.h"
#include <iostream>

/// <summary>
/// Task 1: 
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
		
	}
};