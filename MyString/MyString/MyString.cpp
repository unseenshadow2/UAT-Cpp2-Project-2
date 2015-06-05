// MyString.h
// MyString is a custom string class implementation.

//#include <iostream> - Not sure if I need this...
#include "MyString.h"

// Import only the things that we need
using std::ostream;
using std::istream;

// CONSTRUCTORS

// default constructor
// initializes _capacity to 16 chars
// initializes this MyString to an empty MyString
MyString::MyString()
{
	_capacity = 16;
	_length = 0;

	// Allocate the space
	_string = new char[_capacity];
	_string[0] = '\0'; // Make sure _string ends in a null character
}

// parameterized constructors
// takes a c style string argument
// initializes capacity to greater of strlen(cString) or 16 chars
// initializes this MyString to cString
MyString::MyString(const char * aCString)
{
	size_t cStringSize = strlen(aCString); // Avoid having to run the function strlen() multiple times

	if (cStringSize >= 16)
	{
		_capacity = cStringSize + 1;
		_length = cStringSize;
		_string = new char[_capacity];

		for (int i = 0; i < cStringSize; i++)
		{
			_string[i] = aCString[i];
		}

		_string[_capacity - 1] = '\0';
	}
	else
	{
		_capacity = 16;
		_length = cStringSize;
		_string = new char[_capacity];

		for (int i = 0; i < cStringSize; i++)
		{
			_string[i] = aCString[i];
		}

		_string[_capacity - 1] = '\0';
	}
}

// takes an int argument
// initializes capacity to numChars chars
// initializes this MyString to an empty MyString
MyString::MyString(int numChars)
{
	_capacity = numChars;
	_length = 0;

	_string = new char[_capacity];
	_string[0] = '\0';
}

// copy constructor
// initializes this MyString to a deep copy of the original
MyString::MyString(const MyString & original)
{
	const char * originalString = original._cstr();

	_capacity = original.CurrentCapacity();
	_length = original.Length();

	_string = new char[_capacity];
	for (int i = 0; i < _capacity; i++)
	{
		_string[i] = originalString[i];
	}

	delete[] originalString;
}

// DESTRUCTOR
// dealocate dynamic storage
MyString::~MyString()
{
	delete[] _string;
}

// METHODS
// Append
// Takes a MyString argument
// Appends chars to the end of this MyString
void MyString::Append(const MyString & aMyString)
{

}

// Takes a c style string argument
// Appends chars to the end of this MyString
void MyString::Append(const char * aCString)
{

}

// Assign
// Takes a MyString argument
// makes this MyString a copy of aMyString
void MyString::Assign(const MyString & aMyString)
{

}

// Takes  a c style string argument
// makes this MyString contain the chars of aCString
void MyString::Assign(const char * const aCString)
{

}

// At
// Takes an int argument
// Returns a copy of the char at that index
// throws an exception if index is < 0 or >= _length
char MyString::At(int index) const
{
	return '\0';
}

// Clear
// Makes this MyString empty
// does not change capacity
void MyString::Clear()
{

}

// Makes this MyString empty
// changes capacity to newCapacity
// throws an exception if newCapacity < 0
void MyString::Clear(int newCapacity)
{

}

// Compare
// Takes a MyString argument
// Returns (zero) if the argument contains
//   the same string of chars as this MyString
// Returns (a positive int) if the argument is
//   alphabetically less than this MyString
// Returns (a negative int) if the argument is
//   alphabetically greater than this MyString
int MyString::Compare(const MyString & aMyString)
{
	return 0;
}

// CurrentCapacity
// Returns number of characters that this instance can hold
// without reallocating
int MyString::CurrentCapacity() const
{
	return 0;
}

// Equals
// Takes a MyString argument
// Returns (true) if the argument contains
//   the same string of chars as this MyString,
//   otherwise it returns (false).
bool MyString::Equals(const MyString & aMyString) const
{
	return false;
}

// Takes a c style string argument
// Returns (true) if the argument contains
//   the same string of chars as this MyString,
//   otherwise it returns (false).
bool MyString::Equals(const char * const aCString) const
{
	return false;
}

// Find
// Takes a myString argument
// Returns the index (int)
//   where the argument MyString was found
//   in this MyString. If it is not found, then returns -1.
int MyString::Find(const MyString & aMyString) const
{
	return 0;
}

// Insert
// Takes two arguments
// An int – the index in this MyString
//   at which to insert the new chars
// A MyString containing the chars to be inserted
void MyString::Insert(const MyString & aMyString, int index)
{

}

// Length
// Returns the number (int) of chars in this MyString
int MyString::Length(void) const
{
	return 0;
}

// Replace
// Takes three arguments
// An int – the index of the char in thisMyString
//   to begin replacing at.
// An int – the number of chars to replace
// And a MyString containg the replacement string
// throws an exception if startIndex >= Length
// throws an exception if startIndex + numChars > Length()
// throws an exception if aMyString.Length() < numChars
void MyString::Replace(int startIndex, int numChars, const MyString & aMyString)
{

}

// Substr
// Takes two int arguments,
// An int for the starting index,
// An int for the number of chars to return.
// Returns a MyString with the requested sub-string
//   from the original MyString
// throws an exception if startIndex + numChars > Length()
MyString MyString::SubStr(int startIndex, int numChars) const
{
	MyString placeholder;
	return placeholder;
}

// tolower
// Converts the MyString to lower case
void MyString::tolower()
{

}

// toupper
// Converts the MyString to upper case
void MyString::toupper()
{

}

// getlower
// Returns the lower case version of the MyString
MyString MyString::getlower()
{
	MyString placeholder;
	return placeholder;
}

// getupper
// Returns the upper case version of the MyString
MyString MyString::getupper()
{
	MyString placeholder;
	return placeholder;
}

// OPERATORS

// = (assignment - takes a MyString or a c style string)
MyString MyString::operator= (const MyString & aMyString)
{
	MyString placeholder;
	return placeholder;
}

MyString MyString::operator= (const char *  const aCString)
{
	MyString placeholder;
	return placeholder;
}

// +, += (concatenation - takes a MyString or a c style string)
MyString MyString::operator+ (const MyString & aMyString)
{
	MyString placeholder;
	return placeholder;
}

MyString MyString::operator+= (const MyString & aMyString)
{
	MyString placeholder;
	return placeholder;
}

// [] (read/write char access by index)
// Returns a reference to the char at that index
// throws an exception if index is < 0 or >= _length
char & MyString::operator[] (int index) const
{
	char placeholder = '\0';
	return placeholder;
}

// >, <, >=, <=, ==, != (boolean relational test operators)
bool MyString::operator> (const MyString & aMyString)
{
	return false;
}

bool MyString::operator< (const MyString & aMyString)
{
	return false;
}

bool MyString::operator>= (const MyString & aMyString)
{
	return false;
}

bool MyString::operator<= (const MyString & aMyString)
{
	return false;
}

bool MyString::operator== (const MyString & aMyString)
{
	return false;
}

bool MyString::operator!= (const MyString & aMyString)
{
	return false;
}

// returns a pointer to the underlying c-style string
const char* MyString::_cstr() const
{
	if (_string[0] == '\0')
	{
		return '\0';
	}

	return _string;
}

// <<, >> stream insertion and extraction
ostream & operator<< (ostream & os, const MyString & aMyString)
{
	std::cout << (aMyString._cstr()) << std::endl;
	os << aMyString._cstr();
	return os;
}

istream & operator>> (istream & is, MyString & aMyString)
{
	return is; // Placeholder
}