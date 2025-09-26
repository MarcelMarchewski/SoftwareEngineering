#pragma once

class Task 
{
	public:
		virtual int ID()
		{
			return -1;
		}

		virtual void DoTask()
		{
			return;
		}
};