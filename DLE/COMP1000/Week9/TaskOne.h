#pragma once

#include "../SharedSystems/Task.h"
#include <iostream>
#include <iomanip>

/// <summary>
/// Task 1: Creating a Simple Template Class
/// </summary>
class TaskOne : public Task
{
	public:
		template <typename T>
		class Box
		{
			private:
				T _value;

			public:
				Box(T value) : _value(value) {  };

				T getValue()
				{
					return _value;
				}
		};

		int ID() override
		{
			return 1;
		}

		void DoTask() override
		{
			Box<int> intBox = Box<int>(10);

			Box<double> doubleBox = Box<double>(25.5);

			Box<std::string> stringBox = Box<std::string>("Hello");

			std::cout << "Box value (int): " << intBox.getValue() << "\n";
			std::cout << "Box value (double): " << doubleBox.getValue() << "\n";
			std::cout << "Box value (string): " << stringBox.getValue();
		}
};