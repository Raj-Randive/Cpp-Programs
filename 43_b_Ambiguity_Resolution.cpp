// Ambiguity 2

#include<iostream>
using namespace std;


class Base1{
    public:
        void greet(){
            cout << "How are you ?" << endl;
        }     
};

class Base2{
    public:
        void greet(){
            cout << "Toh Kese hai app log ?" << endl;
        }     
};

// Now there is an ambiguity as both have function with same name so if we derive it in another class then which one it will pick? 
// This creates an ambiguity

class Derived : public Base1, public Base2{
    int a;

    public:
        void greet(){
            Base2 :: greet();
        }
    // Defining that the greet should be taken from Base1 class...!! 

};

class B{
    public:
        void say(){
            cout << "Hello world!" <<endl;
        }
};

class D : public B{
    int a;

    //D's new say() method will overide base class's say() method...!! 
    public:
        void say(){
            cout << "Hey World...Hello!" <<endl;
        }
};


int main()
{
    // Ambiguity 2
    B objb;
    objb.say();

    D objd;
    objd.say();

    return 0;
}