#include<iostream>
using namespace std;


// Function Prototype
// syntax: type function_name (arguments); 

// int sum(int a, b); // ---> Not Accepted
// int sum(int a, int b); // ---> Accepted
int sum(int, int); // ---> Accepted

int main()
{
    int num1, num2;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    // Here num1 and num2 are actual parameters.

    cout << endl << "The sum is: " << sum(num1, num2) << endl;

    return 0;
}

// here we have defined it after main so it will give an error as it is out of the main() function scope...!!!


// Here a and b will be taking values form actual parameters num1 and num2 
int sum(int a, int b){
    int c = a+b; 
    return c;
}