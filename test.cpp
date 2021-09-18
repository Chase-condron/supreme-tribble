#include <iostream>

int main()
{
	double val1, val2, val3, val4, val5;
	double max;
	//get 5, print largest value
	std::cout << "Please enter 5 numbers \n";
	std::cin >> val1 >> val2 >> val3 >> val4 >> val5;

	if (val1 > val2 && val1 > val3 && val1 > val4 && val1 > val5)
	{
	std::cout << "Your largest number is: " << val1;
	}
	if (val2 > val1 && val2 > val3 && val2 > val4 && val2 > val5)
	{
	std::cout << "Your largest number is: " << val2;
	}
	if (val3 > val1 && val3 > val2 && val3 > val4 && val3 > val5)
	{
	std::cout << "Your largest number is: " << val3;
	}
	if (val4 > val1 && val4 > val2 && val4 > val3 && val4 > val5)
	{
	std::cout << "Your largest number is: " << val4;
	}
	if (val5 > val1 && val5 > val2 && val5 > val3 && val5 > val4)
	{
	std::cout << "Your largest number is: " << val5;
	}
}
