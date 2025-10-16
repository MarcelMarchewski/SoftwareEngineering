#include "../SharedSystems/Task.h"

#include "TaskOne.h"
#include "TaskTwo.h"
#include "TaskThree.h"
#include "TaskFour.h"
#include "TaskFive.h"

#include <list>

/// <summary>
/// Called at initial run, prompts user to choose which task program to run
/// </summary>
/// <returns>0</returns>
int main()
{
	// Declare and initialise list of Task objects to be iterated through in the ID check
	std::list<Task*> tasks = { new TaskOne(), new TaskTwo(), new TaskThree(), new TaskFour(), new TaskFive() };

	// Declare a variable for storing the target task ID, then gather user input that gives it a value
	int targetTask;

	std::cout << "Week 4 Tasks\n\n";

	std::cout << "Provide a task number to execute: ";

	std::cin >> targetTask;

	// Calling the "cls" command will make the terminal remove all previous output, providing a blank slate for rendering the user's chosen program
	system("cls");

	// Iterate through each task, determine if the current task matches the user provided ID, execute the task if the ID matches
	for (Task* t : tasks)
	{
		if (t->ID() == targetTask)
		{
			t->DoTask();

			break;
		}
	}

	return 0;
}