#include <iostream>

int age = 19;
float height = 1.84f;
char grade = toupper('a');
std::string name = "Dave";

int main() 
{
	std::cout << name << ":\nAge: " << age << "\nHeight: " << height << "\nGrade: " << grade << "\n\n";

	age = 18;
	height = 1.79f;
	grade = toupper('b');
	name = "Steve";

	std::cout << name << ":\nAge: " << age << "\nHeight: " << height << "\nGrade: " << grade << "\n\n";

	return 0;
}