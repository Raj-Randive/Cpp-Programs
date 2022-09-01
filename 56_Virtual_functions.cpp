// Virtual Functions

#include<iostream>
using namespace std;

class BaseClass{

    public:
        int var_base = 678;
        
        virtual void display(){
            cout << "1 Displaying Base class variable var_base: " << var_base << endl;
        }

};

class DerviedClass : public BaseClass{

    public:    
        int var_derived = 983;
        void display(){
            cout << "2 Displaying Base class variable var_base: " << var_base << endl;
            cout << "2 Displaying Derived class variable var_derived: " << var_derived << endl;
        }

};



int main()
{
    BaseClass * base_class_pointer; // Pointer of a base class
    
    BaseClass obj_base;
    DerviedClass obj_derived;

    base_class_pointer = &obj_derived;
    base_class_pointer -> display();

    // Abhi is default behaviour of BaseClass pointer pointing towards the baseclass members ko changed karne ke liye hai ye virtual class. 


    




    return 0;
}