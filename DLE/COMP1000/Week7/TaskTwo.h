#pragma once

#include "../SharedSystems/Task.h"
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <sstream>

/// <summary>
/// Task 2: Handling Nested Delimiters in JSON-like Data
/// </summary>
class TaskTwo : public Task
{
	public:
		int ID() override
		{
			return 2;
		}

		void DoTask() override
		{
			std::fstream dataStream("data.json");

			std::string jsonData;
			std::string segment;

			while (std::getline(dataStream, segment, '}'))
			{
				segment.erase(std::remove(segment.begin(), segment.end(), '{'));
				segment.erase(std::remove(segment.begin(), segment.end(), '}'));

				std::istringstream innerStream(segment.substr(segment.find(':') + 1));
				std::string value;

				std::string prefixes[2] = { "Name:", "Grades:" };

				int i = 0;

				while (std::getline(innerStream, value , ','))
				{
					std::cout << prefixes[i] << value << " ";

					i++;
				}
			}
		}
};