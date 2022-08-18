#include<iostream>
using namespace std;

class complex{
    int a, b;

    public:
    complex(int , int); // Constructor Declaration...!!

    void printNumber(void){
        cout << "Your Number is "<< a << " + " << b << "i" <<endl;
    }

};

//  ---> Default Constructor...!!
// complex :: complex(void){
//     a = 0;
//     b = 0;
// }


// --> This is a Paramerized Constructor as it takes two parameters
complex :: complex(int x, int y){
    a = x;
    b = y;
}


int main()
{
    // Implicit Call
    complex a(4, 6); // object a
    a.printNumber();

    // Explicit Call
    complex b = complex(5, 7);  // object b
    b.printNumber();
    

    return 0;
}