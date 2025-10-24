#pragma once

#include "../SharedSystems/Task.h"
#include <iostream>

/// <summary>
/// Task 3: Function with Multiple Parameters and Complex Return Types
/// </summary>
class TaskThree : public Task
{
	public:
		int ID() override
		{
			return 3;
		}

		double EuclideanDistance(int p1[2], int p2[2])
		{
			return sqrt(pow(p2[0] - p1[0], 2) + pow(p2[1] - p1[1], 2));
		}

		void DoTask() override
		{
			int coord1[2];
			int coord2[2];

			for (int i = 0; i < 2; i++) 
			{
				std::cout << "Coord 1-" << i << ": ";

				std::cin >> coord1[i];
			}

			for (int i = 0; i < 2; i++)
			{
				std::cout << "Coord 2-" << i << ": ";

				std::cin >> coord2[i];
			}

			std::cout << "\nEuclidean distance: " << EuclideanDistance(coord1, coord2);
		}
};