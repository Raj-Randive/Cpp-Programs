#include<iostream>
using namespace std;

int main()
{
    cout << "Operators in C++ : " << endl << endl; 
    // endl is for printing the next line of code to the new line

    // Arithmetic Operators...!!
    int a = 3, b=6;
    cout << "The value of a + b is : " << a+b << endl;
    cout << "The value of a - b is : " << a-b << endl;
    cout << "The value of a * b is : " << a*b << endl;
    cout << "The value of a / b is : " << a/b << endl;
    cout << "The value of a % b is : " << a%b << endl;
    cout << "The value of a++ is : " << a++ << endl; //First print and then increment.
    cout << "The value of ++a is : " << ++a << endl; //First increment then print it.
    cout<< endl;

    // Assignment Operators
    int c = 5;
    char d = 'r';

    //Comparison Operators
    cout << "The value of a == b : " << (a==b) << endl;
    cout << "The value of a != b : " << (a!=b) << endl;
    cout << "The value of a >= b : " << (a>=b) << endl;
    cout << "The value of a <= b : " << (a<=b) << endl;
    cout << "The value of a > b : " << (a>b) << endl;
    cout << "The value of a < b : " << (a<b) << endl << endl;

    //Logical Operators
    cout << "The value of (a==b) && (a<b) : " << ((a==b) && (a<b)) << endl;
    cout << "The value of (a==b) || (a<b) : " << ((a==b) || (a<b)) << endl;
    cout << "The value of !(a==b) : " << (!(a==b)) << endl;
    
    return 0;
}
