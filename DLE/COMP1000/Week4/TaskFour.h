#pragma once

#include "../SharedSystems/Task.h"
#include <iostream>

/// <summary>
/// Task 4: Switch Case for Menu Selection
/// </summary>
class TaskFour : public Task
{
	public:
		int ID() override
		{
			return 4;
		}

		void DoTask() override
		{
			// Declare user input variable
			int choice;

			// Take user input, then clear the screen
			std::cout << "Main Menu:\n\n1. Start Game\n2. Load Game\n3. Quit\n\n";

			std::cin >> choice;

			std::system("cls");

			// Branch depending on the choice the user has made
			switch (choice) 
			{
				case (1):
				{
					std::cout << "*You started the game...*";

					return;
				}

				case (2): 
				{
					std::cout << "*You loaded a save...*";

					return;
				}

				case (3): 
				{
					std::cout << "*You quit the game...*";

					return;
				}

				default: 
				{
					std::cout << "Invalid option. Try again.";

					return;
				}
			}
		}
};