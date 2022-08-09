#include<iostream>
using namespace std;
 
// RECURSIVE FUNCTION...!!

int factorial(int n){
    if (n <= 1){
        return 1;
    }
    return n * factorial(n-1) ;
}

int main()
{
    // Factorial Number: eg., 6! = 6*5*4*3*2*1 = 720
    // n! = n* (n-1)!

    int a;
    cout << "Enter a number : ";
    cin >> a; 

    cout << "The factorial of " << a <<  " is: " << factorial(a) << endl;


    return 0;
}