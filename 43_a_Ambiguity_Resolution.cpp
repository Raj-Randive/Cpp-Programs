// Ambiguity 1

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


int main()
{
    // Ambiguity 1
    
    Base1 base1obj; 
    Base2 base2obj;
    // base1obj.greet();  --> This will definitely work
    // base2obj.greet();  --> This will definitely work

    Derived derivedObj;
    derivedObj.greet();
    

    return 0;
}