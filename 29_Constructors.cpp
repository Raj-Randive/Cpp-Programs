#include<iostream>
using namespace std;

class complex{
    int a, b;

    public:
    // Creating a Constructor...!!

    complex(void); // Constructor declaration.
    void printNumber(){
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

// Constructor Initialization
complex :: complex(void){  // --> This is a default constructor as it takes no parameters.
    a = 10;
    b = 3;
}


int main()
{
    complex c1, c2, c3;
    c1.printNumber();
    c2.printNumber();
    c3.printNumber();
    

    return 0;
}