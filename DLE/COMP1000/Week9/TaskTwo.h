#pragma once

#include "../SharedSystems/Task.h"
#include <iostream>
#include <algorithm>
#include <string>
#include <iomanip>

/// <summary>
/// Task 2: Using Function Overloading in Template Classes
/// </summary>
class TaskTwo : public Task
{
	public:

		template <typename T>
		class Printer 
		{
			public:
				Printer()
				{

				}

				void Print(int _num) 
				{
					
				}

				void Print(std::string _str) 
				{
					std::string _copy = _str;

					std::transform(_copy.begin(), _copy.end(), _copy.begin(), ::toupper);

					std::cout << "Uppercase of " << _str << ": " << _copy;
				}
		};

		int ID() override
		{
			return 2;
		}

		void DoTask() override
		{
			Printer<std::string> _p = Printer<std::string>();

			_p.Print("yoooo");
		}
};