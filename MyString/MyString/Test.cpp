// This will serve mainly as the testing
// file. This will be deleted before the
// project is submitted.

#include <iostream>
#include "MyString.h"

int main()
{
	MyString t1; // Constructor 1
	MyString t2("I am j"); // Constructor 2, less than 16 characters
	MyString t3("1234567890qwertyuiopasdfghjklzxcvbnm"); // Constructor 2, more than 16 characters
	MyString t4(10); // Constructor 3
	MyString t5(t3); // Constructor 4
	MyString t6; //Constructor 5

	std::cout << std::endl << " ---- ---- Constructors: " << std::endl;
	std::cout << "Constructor 1:" << std::endl << "\t" << t1 << std::endl << std::endl;

	std::cout << "Constructor 2 (less than 16 characters):" << std::endl << "\t" << t2 << std::endl << std::endl;

	std::cout << "Constructor 2 (greater than 16 characters):" << std::endl << "\t" << t3 << std::endl << std::endl;

	std::cout << "Constructor 3:" << std::endl << "\t" << t4 << std::endl << std::endl;

	std::cout << "Constructor 4:" << std::endl << "\t" << t5 << std::endl << std::endl;

	// Visual space
	std::cout << std::endl << " ---- ---- Operators: " << std::endl;

	// Test if both the equals sign and istream are working
	std::cout << "Assign t1 a value, please: ";
	std::cin >> t1;

	// Visual space
	std::cout << std::endl << std::endl;

	// Display test result
	std::cout << t1 << std::endl;

	// Show [] operator
	std::cout << "[] Operator test: " << t2[2] << std::endl;

	// Display + and += operators
	t2 += t1;
	std::cout << std::endl << "+= operator test: " << t2 << std::endl;
	t2 += " Extra Stuff at the END";
	std::cout << "+= C string operator test: " << t2 << std::endl << std::endl;

	t1 = t2 + t3;
	std::cout << "+ operator test: " << t1 << std::endl;
	std::cout << "+ C string operator test: " << (t1 + " More shit on the end") << std::endl << std::endl;

	// Visual space
	std::cout << std::endl << " ---- ---- Methods: " << std::endl;

	// toupper and tolower tests
	t3.toupper();
	std::cout << "toupper test: " << t3 << std::endl;
	std::cout << "getlower test: " << t3.getlower() << std::endl;
	std::cout << "SubStr test: " << t3.SubStr(3, 5) << std::endl;
	
	std::cout << std::endl;
	
	// chris' changes
	// append test
	std::cout << "Assign t6 a value: ";
	std::cin >> t6;
	std::cout << "\nValue of t6: " << t6 << std::endl;

	t6.Append("p");
	std::cout << "append test adding 'p': " << t6 << std::endl;
	
	t6.Append("bob");
	std::cout << "Appending string: 'bob': " << t6 << std::endl;
	std::cout << std::endl;

	// assign test
	std::cout << "Assigning 'grape' to t6." << std::endl;
	t6.Assign("grape");
	std::cout << "Value of t6: " << t6 << std::endl;
	std::cout << "t6 == grape: " << t6.Equals("grape") << std::endl;

	// at test
	std::cout << "Finding character at position 4: ";
	std::cout << t6.At(4); 
	std::cout << std::endl;

	// Find test
	std::cout << "Find test: " << t6.Find("ape") << std::endl;

	std::system("pause");
	return 0;
}