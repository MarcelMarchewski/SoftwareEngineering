#pragma once

#include "../SharedSystems/Task.h"
#include <iostream>

/// <summary>
/// Task 5: Nested If-Else for Temperature Check
/// </summary>
class TaskFive : public Task
{
	public:
		int ID() override
		{
			return 5;
		}

		void DoTask() override
		{
			// Declare user input variable
			int temp;

			// Prompt user and take input
			std::cout << "Provide temperature: ";

			std::cin >> temp;

			// Branch depending on if the temperature falls within a certain range
			if (temp <= 30) 
			{
				if (temp >= 15) 
				{
					std::cout << "It's warm.";
				}

				else 
				{
					if (temp >= 0)
					{
						std::cout << "It's cold.";
					}

					else
					{
						std::cout << "It's freezing.";
					}
				}
			}

			else 
			{
				std::cout << "It's hot.";
			}
		}
};