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
	// Declare and initialise each number with the last two digits of my student ID
	int numOne = 8;
	int numTwo = 8;

	// Output the sum of both integers to the console
	cout << numOne + numTwo;
}

/// <summary>
/// Multiplies the first digit of my student ID with another number and shows the result to the console
/// </summary>
void task2()
{
	// Since there is no requirement to "read" the two numbers in this task, using variables is unnecessary
	// Multiply the first digit of my student ID with 7 and output the result directly to the console
	cout << 2 * 7;
}

/// <summary>
/// Iterate through numbers 1-(STUDENT_ID % 20) and output result to console.
/// If this value isn't greater than 10, iterate through numbers 1-10 and output result to console
/// </summary>
void task3() 
{
	// The max() call ensures that if STUDENT_ID % 20 is not greater than 10, every number between 1-10 is still displayed to the console
	// In the case of my student ID, this max() call will always return 10 because STUDENT_ID % 20 = 8, but this avoids hard coding
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
	// Performing % 2 on any integer will return the remainder when that integer is divided by two
	// Integers that are divisible by two are even and will return 0
	// Integers that are not divisible by two are odd and will return 1
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
	switch ((STUDENT_ID % 7) + 1) 
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
	}
}

/// <summary>
/// Create an array with 5 values and output its third value to the console
/// </summary>
void task6()
{
	// Declare and initialise array with size of 5 and custom values, including student ID personalisation
	int arr[5] = { STUDENT_ID % 50, 6, 1, 9, 8 };

	// Output the third element of the array (zero indexed)
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
	task1(); task2(); task3(); task4(); task5(); task6(); task7(); task8(); task9(); task10();
	return 0;
}
