#include <iostream>

int main()
{
	int favNumber;
	std::cout << "Enter your favorite number between 1 and 100: ";
	std::cin >> favNumber;
	std::cout << std::endl;
	
	std::cout << "Thats my favorite number too!\n" << "No really, " << favNumber << " is my favorite number!!" << std::endl;
	
	system("pause");

	return 0;
}