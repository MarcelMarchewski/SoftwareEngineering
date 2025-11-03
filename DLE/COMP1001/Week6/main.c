#include <stdio.h>
#include <Windows.h>

void TaskTwo()
{
	int arrA[2] = { 1, 2 };
	int arrB[2] = { 3, 4 };

	int arrC[2];

	for (int i = 0; i < 2; i++)
	{
		arrC[i] = arrA[i] + arrB[i];

		printf("%d\n", arrC[i]);
	}

	system("pause");
}

void TaskThree() 
{
	char name[20];

	printf("Enter your name: ");

	scanf_s("%19s", name, (unsigned int) sizeof(name));

	printf("Your name is %19s!\n", name);

	system("pause");
}

void TaskFour() 
{
	char arr[20];
	char pattern[2] = { 'a' };

	printf("Enter a string (no spaces): ");

	scanf_s("%19s", arr, (unsigned int) sizeof(arr));

	int count = 0;

	for (int i = 0; i < 20; i++) 
	{
		if (arr[i] == pattern[0])
		{
			count++;
		}
	}

	printf("The character '%c' appears %d times\n", pattern[0], count);

	system("pause");
}

int main() 
{
	TaskTwo();

	system("cls");

	TaskThree();

	system("cls");

	TaskFour();

	system("cls");
}