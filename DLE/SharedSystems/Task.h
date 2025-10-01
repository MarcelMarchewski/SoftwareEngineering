#pragma once

// Through polymorphism, this class will act as a template for each task program to override, allowing the main.cpp file to iterate through a list of task programs thanks to their shared type
class Task 
{
	public:
		/// <summary>
		/// An overridable ID property belonging to each task
		/// </summary>
		virtual int ID()
		{
			return -1;
		}

		/// <summary>
		/// An overridable function that will contain each program
		/// </summary>
		virtual void DoTask()
		{
			return;
		}
};