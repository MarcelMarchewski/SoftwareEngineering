#include <iostream>

void TaskTwo() 
{
	int numOne;
	int numTwo;

	std::cout << "Input the first number: ";
	std::cin >> numOne;
	
	std::cout << "\nInput the second number: ";
	std::cin >> numTwo;

	std::cout << "\n\nAddition: " << numOne + numTwo << "\nSubtraction: " << numOne - numTwo << "\nMultiplication: " << numOne * numTwo << "\nDivision: " << numOne / numTwo << "\nModulus: " << numOne % numTwo;
}