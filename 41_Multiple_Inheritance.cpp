// Multiple Inheritance...!!

#include<iostream>
using namespace std;


class Base1{

    protected:
        int base1int;

    public:
        void set_base1_int(int a){
            base1int = a;
        }

};

class Base2{

    protected:
        int base2int;

    public:
        void set_base2_int(int b){
            base2int = b;
        }

};

class Base3{

    protected:
        int base3int;

    public:
        void set_base3_int(int c){
            base3int = c;
        }

};


// *********************************************************
// (Multiple) Derived Class Syntax

class Derived : public Base1, public Base2, public Base3{

    public:
        void show(){
            cout << "The value of the Base 1 int is: " << base1int <<endl;
            cout << "The value of the Base 2 int is: " << base2int <<endl;
            cout << "The value of the Base 3 int is: " << base3int <<endl;
            cout << "The sum of Base 1 and Base 2 int is : " << base1int + base2int +base3int <<endl;
        }

};


/*

The inherited derived class will look something like this:
    Data Members:
        base1int --> protected
        base2int --> protected
    
    Member Functions :
        set_base1int() --> public
        set_base2int() --> public
        set_show() --> public

*/

int main()
{
    Derived objd1;
    objd1.set_base1_int(5);
    objd1.set_base2_int(7);
    objd1.set_base3_int(8);
    objd1.show();

    return 0;
}