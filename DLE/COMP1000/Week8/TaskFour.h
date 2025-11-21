#pragma once

#include "../SharedSystems/Task.h"
#include <iostream>
#include <iomanip>

/// <summary>
/// Task 4: Exploring Static Members and Methods
/// </summary>
class TaskFour : public Task
{
	public:
		class Counter 
		{
			private:
				static int _count;

			public:
				Counter() 
				{
					Counter::_count++;
				}

				~Counter() 
				{
					Counter::_count--;
				}

				static int GetCount() 
				{
					return Counter::_count;
				}
		};

		int ID() override
		{
			return 4;
		}

		void DoTask() override
		{
			Counter _count1 = Counter();
			Counter _count2 = Counter();

			std::cout << _count1.GetCount();
		}
};