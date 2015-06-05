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
	MyString t5(t3);

	std::cout << std::endl;
	std::cout << t1 << std::endl;
	std::cout << t2 << std::endl;
	std::cout << t3 << std::endl;
	std::cout << t4 << std::endl;
	std::cout << t5 << std::endl;
}