#include <iostream>
#include "Q16.h"
#define OUT

// Name:
// Josh Meier

// Write any functions you need here!


int p9( int *givenNum)
{
	std::cout << *givenNum << std::endl;
	return 0;
}

int p11( int &givenNum)
{
	std::cout << givenNum << std::endl;
	return 0;
}
void Change(const int& a, OUT int* c) {
	*c = a;
}

int main() {
    // Add as many prints to cout as you need to answer the questions.
    // Leave them in your code when you turn it in.
    // If you have lines of code that cause errors that test the questions,
    // leave this code in your file but comment it out.
    
    // 1) Declare an int
	int x =0;
// 	x++;
    // 2) Declare a pointer to that int
	int *num = &x;
    // 3) Increment the int via the pointer
	*num +=1;
// 	std::cout << *num << std::endl;
    // 4) Declare a reference to your int
	int &numX = x;
    // 5) Increment the int via the reference
	numX++;
// 	std::cout << numX << " " << x << std::endl;
    // 6) When you increment the int via the variable declared in #1, which
    // variables will be modified to see the changes? (the pointer , reference or both?)
    // Answer:
	std::cout << "both would be changed since one points to the memory put aside for the int and the other \n takes the actual value" << std::endl;

    // 7) When you increment the int via the pointer declared in #2, which
    // variables will be modified to see the changes?
    // Answer: 
	std::cout << "x would be modified so it would have the same effect as question 6" << std::endl;
    // 8) When you increment the int via the reference declared in #4, which
    // variables will be modified to see the changes?
    // Answer: 
	std::cout << "None would change because the reference just grabs the variable and does not constantly update when it changes." << std::endl;
    // 9) Write a function that takes an int * parameter. How would you pass the 
    // variable from #1 into this function? (write the function header and function call below)
// 	int p9( int *givenNum)
// 	{
// 		cout << givenNum << endl;
// 		return 0;
// 	}
	
	p9(num);

    // 10) Can you pass your reference from #4 to the function from #9 without accessing its address?
    // Answer:
	std::cout << "Yes since &x is the same as *numX = x" << std::endl;

    // 11) Write a function that takes an int & parameter. How would you pass the 
    // variable from #1 into this function? (write the function header and call below)
// int p11( int &givenNum)
// {
// 	std::cout << givenNum << std::endl;
// 	return 0;
// }
	p11(x);
	
    // 12) Can you pass your pointer from #2 to the function from #11 without dereferencing it?
    // Answer:
	std::cout << "No because without dereferencing #2 is just a address " << std::endl;

	// 13) Can you pass your reference from #4 to the function from #11?
    // Answer:
	std::cout << "No This will cause a error due to addresses" << std::endl;

    // 14) Write a function that takes one const reference input parameter and one pointer
    // output parameter. The function should fill in the value of the output parameter based
    // on the value of the input parameter. (what it does exactly is up to you).
    // Call your function 3 times below. Be sure to include output as necessary to be sure
    // your function works as described.
// void Change(const int& a, OUT int* c) {
// 	*c = a;
// }
	int in = 10;
	int out = 0;
	Change(in,&out);
	std::cout << out << std::endl;
	Change(in+10,&out);
	std::cout << out << std::endl;
	Change(in+20,&out);
	std::cout << out << std::endl;
	
    // 15) What is/are the difference(s) between output parameters and return values?
    // Answer:
	std::cout << "Return value is only to inform success or failure and output is to generally return things." << std::endl;

    // 16) Create a custom class with at least one private field/class attribute. Overload the == and + operator for this class
    // such that == can be used to compare the objects of the class and + can be used to add
    // 2 objects of the class together. Implement an appropriate constructor for your class.
    // When you overload these operators, the resulting return value should make sense.
    // Instantiate at least 2 objects of this class and perform the == and + operations on them.
    // hint: for operator+, the function signature when implemented as a member function of the Object class is:
    // Object operator+(const Object &other)
    // Answer:
	Q16 E1, E2; 
	E1.pcon(5);
	E2.con();
	std::cout << E1.operator==(E2) << std::endl;
	std::cout << E1.operator+(E1) << std::endl;
	
}
