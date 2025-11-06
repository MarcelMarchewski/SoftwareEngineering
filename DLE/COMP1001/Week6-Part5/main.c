/*
------------------DR VASILIOS KELEFOURAS-----------------------------------------------------
------------------COMP1001 ------------------------------------------------------------------
------------------COMPUTER SYSTEMS MODULE-------------------------------------------------
------------------UNIVERSITY OF PLYMOUTH, SCHOOL OF ENGINEERING, COMPUTING AND MATHEMATICS---
*/

#include<stdio.h> 
#include <windows.h> //this library is needed for pause() function

#define STUDENT_COUNT 3

struct Datetime //this is how a struct is declared. Structure members cannot be initialized here (when a datatype is declared, no memory is allocated for it. Memory is allocated only when variables are created.). 
{
	unsigned short int year;
	char month[10];
	char day[10];
	unsigned short int hours;
	unsigned short int minutes;
	unsigned short int seconds;
};

struct Student 
{
	char student_name[20];
	int module_code;
	float mark;
};

int main()
{
	struct Datetime d1 = { 2020, "June", "Monday",16, 11, 34 }; // d1 is a struct object of datetime

	printf("This is %s of %s %d and the time is %d:%d:%d\n", d1.day, d1.month, d1.year, d1.hours, d1.minutes, d1.seconds);

	d1.year = 1999;

	printf("This is %s of %s %d and the time is %d:%d:%d\n", d1.day, d1.month, d1.year, d1.hours, d1.minutes, d1.seconds);

	struct Student students[3] = { { "John", 1001, 60 }, { "Alan", 1000, 37 }, { "Steve", 1004, 100 } };

	for (int i = 0; i < STUDENT_COUNT; i++) 
	{
		const struct Student _s = students[i];

		printf("Student Name: %s, Module Code: %u, Mark: %f\n", _s.student_name, _s.module_code, _s.mark);
	}

	system("pause"); //this command does not let the output window to close
	return 0;
}