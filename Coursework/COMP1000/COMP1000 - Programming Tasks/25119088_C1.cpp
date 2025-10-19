// Name: Marcel Marchewski
// Student ID: 25119088

#include <iostream>
using namespace std;

// Useful constant for acessing my student ID across all tasks and eliminating the risk of a typo in hard coded values affecting output
const int STUDENT_ID = 25119088;

/// <summary>
/// Performs the addition of the two user provided integers.
/// When tested with the last two digits of my student id, this results in an output of 16
/// </summary>
void task1() 
{
	int values[2];

	for (int i = 0; i < 2; i++) 
	{
		cout << "Provide number " << i + 1 << ": ";

		cin >> values[i];

		cout << "\n";
	}

	cout << "Sum of both numbers: " << values[0] + values[1];
}

/// <summary>
/// Multiplies the first digit of my student ID with another number and shows the result to the console
/// </summary>
void task2()
{
	// Use \n to avoid calling cout twice unnecessarily 
	cout << "Integer multiplier (2 x 7)\n" << 2 * 7;
}

/// <summary>
/// Iterate through numbers 1-(STUDENT_ID % 20) and output result to console.
/// If this value isn't greater than 10, iterate through numbers 1-10 and output result to console
/// </summary>
void task3() 
{
	cout << "Loop program\n";

	// max() returns the greatest of the two provided parameters
	for (int i = 1; i <= max(10, STUDENT_ID % 20); i++) 
	{
		cout << i << "\n";
	}
}

/// <summary>
/// Check whether user inputted value is even or odd, output result to the console.
/// When my student ID is used, this always results in: "25119088 is even" 
/// </summary>
void task4() 
{
	int target;

	cout << "Even/Odd Tester\nProvide an integer: ";

	cin >> target;

	// MOD 2 returns the remainder when a value is divided by 2, therefore when the remainder is 0, the value is even
	if (target % 2 == 0) 
	{
		cout << "\n" << target << " is even";
	}

	else 
	{
		cout << "\n" << target << " is odd";
	}
}

/// <summary>
/// Check which day the provided integer corresponds to, output the result to the console.
/// When tested with (STUDENT_ID % 7) + 1 (which is equal to 2) this always results with: "Tuesday"
/// </summary>
void task5() 
{
	int choice;

	cout << "Integer to Weekday\nEnter a number between 1-7 (STUDENT_ID % 7 + 1 = 2): ";

	cin >> choice;

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
/// This will always result with: "Third array element: 38"
/// </summary>
void task6()
{
	int arr[5] = { 7, 6, STUDENT_ID % 50, 9, 8 };

	// Output third element (zero indexed)
	cout << "Array accessor\nThird array element: " << arr[2];
}

/// <summary>
/// Follows the formula for euclidean distance, where d = root( (x2 - x1)^2 + (y2 - y1)^2 )
/// </summary>
double EuclideanDistance(int p1[2], int p2[2])
{
	return sqrt( pow(p2[0] - p1[0], 2) + pow(p2[1] - p1[1], 2) );
}

/// <summary>
/// Calculate the euclidean distance between two points, using the last two digits of my student ID as the first coordinate pair
/// This task includes a separate function named EuclideanDistance(p1, p2)
/// </summary>
void task7() 
{
	int p1[2] = { 8, 8 };
	int p2[2] = { 5, 3 };

	// Read definition of the function called here to view euclidean distance implementation
	cout << "Euclidean Distance Calculator\nDistance between coordinates (8, 8) and (5, 3): " << EuclideanDistance(p1, p2);
}

int RecursionDepthCounter() 
{
	static int depth = 0;

	depth++;

	return depth;
}

void task8() 
{
	cout << "Recursion Depth Counter with a static local variable\n";

	for (int i = 0; i < STUDENT_ID % 5 + 1; i++) 
	{
		cout << "Depth: " << RecursionDepthCounter() << "\n";
	}
}

double averagePositive() 
{
	int sum = 0;
	int count = 0;
	int num = 0;

	do
	{
		cin >> num;
		
		// Bug 1: There were no checks for if num was a positive integer, leading to invalid numbers being added to the sum
		// Fix 1: Added an if statement checking whether the provided integer is positive, preventing negatives from influencing the output
		if (num >= 0)
		{
			sum += num;

			// Bug 2: The counter would be incremented even when -1, the stop flag, was provided, leading to an incorrect output value
			// Fix 2: The counter is now incremented within an if statement that doesn't run if the stop condition is met or an invalid number is provided
			count++;
		}

	} while (num != -1);
	

	// Bug 3: In the event of the sum and the count values equalling zero, the program would attempt to divide 0 by 0 and return an invalid value
	// Fix 3: Added an if statement that sets the value to 0 in this edge case
	if (sum == 0 && count == 0)
	{
		return 0.0f;
	}

	else 
	{
		// Bug 4: Division of sum and count was performed as integers instead of doubles, leading to loss of decimal accuracy of averages
		// Fix 4: Added explicit casting to double, leading to the most accurate possible output
		return (double) sum / (double) count;
	}
}


void task9() 
{
	cout << "\nDebugging Task\n" << averagePositive();
}

int globalVar = 0;

int RecursiveIncrement(int depth = 0) 
{
	static int staticVar = 0;

	if (depth < 5) 
	{
		staticVar += 5;

		depth++;

		RecursiveIncrement(depth);
	}

	return staticVar;
}

void task10() 
{
	for (int i = 0; i < 5; i++) 
	{
		globalVar += 1;
	}

	cout << "Global/Static Variables\nThe global variable is accessible from any function, while the static variable is limited to the scope of the function named 'RecursiveIncrement'\nGlobal value (obtained through global scope): " << globalVar << "\nStatic value (obtained through return value of function): " << RecursiveIncrement();
}

int main() 
{
	// Move each task function into an array
	void* ptrs[10] { task1, task2, task3, task4, task5, task6, task7, task8, task9, task10 };

	// Iterate through each function pointer
	for (int i = 0; i < 10; i++) 
	{
		// Clear the screen
		system("cls");

		// Output task number
		cout << "Task " << i + 1 << ":\n\n";

		// Call the current task's function
		((void(*)())ptrs[i])();

		// Output completion message
		cout << "\n\nTask " << i + 1 << " Complete\n";

		// Wait for any key to be pressed
		system("pause");
	}

	return 0;
}
