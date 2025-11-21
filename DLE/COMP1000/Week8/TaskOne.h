#pragma once

#include "../SharedSystems/Task.h"
#include <iostream>
#include <iomanip>

/// <summary>
/// Task 1: Creating a Simple Class
/// </summary>
class TaskOne : public Task
{
	public:
		class Book 
		{
			private:
				std::string _title;
				std::string _author;
				
				float _price;

			public:
				Book(std::string title, std::string author, float price) : _title(title), _author(author), _price(price) { }

				void DisplayInfo() 
				{
					std::cout << "Title: " << _title << ", Author: " << _author << ", Price: " << _price << " GBP\n";
				}
		};

		int ID() override
		{
			return 1;
		}

		void DoTask() override
		{
			Book _houseOfLeaves = Book("House of Leaves", "Mark Z. Danielewski", 24.99f);

			_houseOfLeaves.DisplayInfo();
		}
};