#include "Task.h"

#include "TaskOne.h"
#include "TaskTwo.h"
#include "TaskThree.h"
#include "TaskFour.h"
#include "TaskFive.h"

#include <list>

int main() 
{
	std::list<Task*> tasks = { new TaskOne(), new TaskTwo(), new TaskThree(), new TaskFour(), new TaskFive() };

	int targetTask;

	std::cout << "Provide a task number to execute: ";

	std::cin >> targetTask;

	system("cls");

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