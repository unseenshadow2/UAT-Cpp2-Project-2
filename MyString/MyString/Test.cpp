// This will serve mainly as the testing
// file. This will be deleted before the
// project is submitted.

#include <iostream>
#include "MyString.h"

int main()
{
	MyString t1; // Constructor 1
	MyString t2("I am j"); // Constructor 2, less than 16 characters
	MyString t3("1234567890abcdefghijk"); // Constructor 2, more than 16 characters
	MyString t4(10); // Constructor 3
	MyString t5(t3); // Constructor 4

	std::cout << std::endl;
	std::cout << "Constructor 1:" << std::endl << "\t" << t1 << std::endl << std::endl;

	std::cout << "Constructor 2 (less than 16 characters):" << std::endl << "\t" << t2 << std::endl << std::endl;

	std::cout << "Constructor 2 (greater than 16 characters):" << std::endl << "\t" << t3 << std::endl << std::endl;

	std::cout << "Constructor 3:" << std::endl << "\t" << t4 << std::endl << std::endl;

	std::cout << "Constructor 4:" << std::endl << "\t" << t5 << std::endl << std::endl;

	// Test if both the equals sign and istream are working
	std::cout << "Assign t1 a value, please: ";
	std::cin >> t1;

	// Visual space
	std::cout << std::endl << std::endl;

	// Display test result
	std::cout << t1 << std::endl;

	// Show [] operator
	std::cout << "[] Operator test: " << t2[2] << std::endl;
	std::cout << "t2 Length: " << t2.Length() << std::endl;
	std::cout << "t1 Length: " << t1.Length() << std::endl;

	// Display + and += operators
	t2 += t1;
	std::cout << std::endl << "+= operator test: " << t2 << std::endl << std::endl;

	t1 = t2 + t3;
	std::cout << "+ operator test: " << t1 << std::endl << std::endl;

	std::cout << std::endl;
	std::system("pause");
	return 0;
}