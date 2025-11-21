#pragma once

#include "../SharedSystems/Task.h"
#include <iostream>
#include <iomanip>

/// <summary>
/// Task 2: Implementing Access Specifiers and Method
/// </summary>
class TaskTwo : public Task
{
	public:
		class Student 
		{
			private:
				std::string _name;

				int _age;

				char _grade;

			public:
				void SetName(std::string name) 
				{
					_name = name;
				}

				std::string GetName() 
				{
					return _name;
				}

				void SetAge(int age) 
				{
					_age = age;
				}

				int GetAge() 
				{
					return _age;
				}

				void SetGrade(char grade) 
				{
					_grade = grade;
				}

				char GetGrade() 
				{
					return _grade;
				}
		};

		int ID() override
		{
			return 2;
		}

		void DoTask() override
		{
			Student _student = Student();

			_student.SetName("Jake");
			_student.SetAge(82);
			_student.SetGrade('F');

			std::cout << "Name: " << _student.GetName() << ", Age: " << _student.GetAge() << ", Grade: " << _student.GetGrade();
		}
};