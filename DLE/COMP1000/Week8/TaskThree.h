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
		class Car 
		{
			private:
				std::string _make;

				int _year;

			public:
				Car(std::string make = "Unknown", int year = 0) : _make(make), _year(year) {  }

				~Car() 
				{
					std::cout << "Car of Make " << _make << " and Year " << _year << " has been destroyed!\n";
				}
		};

		int ID() override
		{
			return 3;
		}

		void DoTask() override
		{
			Car _defaultCar = Car();

			Car _customCar = Car("Porsche 911 Turbo", 1977);
		}
};