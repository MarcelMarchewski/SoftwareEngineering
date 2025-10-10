// Name: Marcel Marchewski
// Student ID: 25119088

#include <iostream>
using namespace std;

// Useful constant for acessing my student ID across all tasks and eliminating the risk of a typo in hard coded values affecting output
const int STUDENT_ID = 25119088;

/// <summary>
/// Performs the addition of the last two digits of my student ID and outputs the result to the console
/// </summary>
void task1() 
{
	int numOne = 8;
	int numTwo = 8;

	cout << numOne + numTwo;
}

/// <summary>
/// Multiplies the first digit of my student ID with another number and shows the result to the console
/// </summary>
void task2()
{
	cout << 2 * 7;
}

/// <summary>
/// Iterate through numbers 1-(STUDENT_ID % 20) and output result to console.
/// If this value isn't greater than 10, iterate through numbers 1-10 and output result to console
/// </summary>
void task3() 
{
	for (int i = 1; i <= max(10, STUDENT_ID % 20); i++) 
	{
		cout << i << "\n";
	}
}

/// <summary>
/// Check whether STUDENT_ID is even or odd, output result to the console
/// </summary>
void task4() 
{
	if (STUDENT_ID % 2 == 0) 
	{
		cout << STUDENT_ID << " is even";
	}

	else 
	{
		cout << STUDENT_ID << " is odd";
	}
}

/// <summary>
/// Check which day the provided integer corresponds to, output the result to the console
/// </summary>
void task5() 
{
	int choice;

	cout << "Enter a number between 1-7: ";

	cin >> choice;

	// (Student ID % 7) + 1

	switch (choice) 
	{
		case (1): 
		{
			cout << "Monday";
			break;
		}

		case (2):
		{
			cout << "Tuesday";
			break;
		}

		case (3):
		{
			cout << "Wednesday";
			break;
		}

		case (4):
		{
			cout << "Thursday";
			break;
		}

		case (5):
		{
			cout << "Friday";
			break;
		}

		case (6):
		{
			cout << "Saturday";
			break;
		}

		case (7):
		{
			cout << "Sunday";
			break;
		}

		default: 
		{
			cout << "Invalid input!";
		}
	}
}

/// <summary>
/// Create an array with 5 values and output its third value to the console
/// </summary>
void task6()
{
	int arr[5] = { 7, 6, STUDENT_ID % 50, 9, 8 };

	cout << arr[2];
}

/// <summary>
/// 
/// </summary>
void task7() 
{

}

void task8() 
{

}

void task9() 
{

}

void task10() 
{

}

int main() 
{
	// Move each task function into an array
	void* ptrs[10] { task1, task2, task3, task4, task5, task6, task7, task8, task9, task10 };

	// Declare and initialise index variable
	int i = 0;

	// Iterate through each function pointer
	for (void* t : ptrs) 
	{
		// Clear the screen
		system("cls");

		// Output task number
		cout << "Task " << i + 1 << ":\n\n";

		// Call the current task's function
		((void(*)())t)();

		// Output completion message
		cout << "\n\nTask " << i + 1 << " Complete\n";

		// Wait for any key to be pressed
		system("pause");

		// Increment the index variable
		i++;
	}

	return 0;
}
