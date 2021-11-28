// Chapter 03, exercise 08: test if integer value is odd or even

 //*  UCF COP3330 Fall 2021 Assignment 5 Solution
 //*  Copyright 2021 Christopher Jean
 

#include "C:\Users\cjean\Desktop\Cop3330\Cop3330 C++\std_lib_facilities.h"


int main()
{
	int number = 0;
	cout << "Enter integer number\n";
	cin >> number;
	if (number % 2 == 0) {
		cout << "The value " << number << " is an even number.\n";
	}
	else {
		cout << "The value " << number << " is an odd number.\n";
	}
	return 0;
}