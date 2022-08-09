// Classes, Public and Private access modifiers 

#include<iostream>
using namespace std;

class Employee
{
    private:
        int a, b, c;
    public:
        int d, e;
         
        void setData(int a1, int b1, int c1); // Declaration

        void getData(){
            cout << "The value of a is: " << a << endl;
            cout << "The value of b is: " << b << endl;
            cout << "The value of c is: " << c << endl;
            cout << "The value of d is: " << d << endl;
            cout << "The value of e is: " << e << endl;
        }
}; 

void Employee :: setData(int a1, int b1, int c1){
    a = a1;
    b = b1;
    c = c1;
};

int main(){

    Employee Raj;
    // Raj.a = 2122;  ---> Gives Error as a is private, Therefore cannot be accessed.

    Raj.d = 123;
    Raj.e = 34;

    Raj.setData(1, 2, 4);
    Raj.getData();
     

    return 0;
}