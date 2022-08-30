// Constructors in derived classes i.e Inheritance...!!

#include<iostream>
using namespace std;

/*

Case1:
class B : public A{
    // Order of execution of constructor --> first A() then B()
}

Case2:
class A : public B, public C{
    // Order of execution of constructor --> first B() then C() and then A()
}

Case3:
class A : public B, virtual public C{
    // Order of execution of constructor --> virtual C() then B() and then A()
}

*/

class Base1{
    int data1;

    public: 
        Base1(int i){
            data1 = i;
            cout << "Base1 class constructor called!" << endl;
        }

        void printDataBase1(void){
            cout << "The value of data1 is: " << data1 <<endl;
        }
};

class Base2{
    int data2;

    public: 
        Base2(int i){
            data2 = i;
            cout << "Base2 class constructor called!" << endl;
        }

        void printDataBase2(void){
            cout << "The value of data2 is: " << data2 <<endl;
        }
};

class Derived : public Base1, public Base2{  // Order will change if we write like :-->   " public Base2, public Base1 "
    int derived1, derived2;

    public:

        // Now we want to call the constructors of Both Base Classes
        Derived(int a, int b, int c, int d) : Base1(a), Base2(b){
            derived1 = c;
            derived2 = d;
            cout << "Derived class Constructor is called." << endl;

        }

        void printDataDerived(){
            // Derived :: printData();
            cout << "The Value of derived1 is: " << derived1 <<endl;
            cout << "The Value of derived2 is: " << derived2 <<endl;
        }

};


int main()
{
    Derived obj(1, 2, 3, 4);
    obj.printDataBase1();
    obj.printDataBase2();
    obj.printDataDerived();

    return 0;
}