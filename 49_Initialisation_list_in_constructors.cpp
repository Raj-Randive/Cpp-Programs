// Initialisation List

/*
Syntax for initialization List in constructor

constructor (argument-list) : initialization-section
{
    assignment + other code;
}

*/

#include<iostream>
using namespace std;

class Test{
    int a; 
    int b;
    
    public:
        // Test(int i, int j) : a(i), b(j)
        // Test(int i, int j) : a(i), b(j+i)
        // Test(int i, int j) : a(i), b(2*j)
        // Test(int i, int j) : a(i), b(a + j)   -->   It will run because the value of a is available!


        Test(int i, int j) : b(j), a(i+b)  // --> This will create a problem because "a" will be initialised first.
        //   The value of a will be a garbage value as at that time value of b was not available...!!

        {
            cout << "Constructor Called!" << endl;
            cout << "The value of a is: " << a << endl;
            cout << "The value of b is: " << b << endl;
        }
};

int main()
{
    Test obj(4, 6);

    return 0;
}