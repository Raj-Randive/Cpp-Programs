// Pointers to derived Classes...!!

#include<iostream>
using namespace std;

class BaseClass{

    public:
        int var_base;
        void display(){
            cout << "Displaying Base class variable var_base: " << var_base << endl;
        }

};

class DerviedClass : public BaseClass{

    public:    
        int var_derived;
        void display(){
            cout << "Displaying Base class variable var_base: " << var_base << endl;
            cout << "Displaying Derived class variable var_derived: " << var_derived << endl;
        }

};

int main()
{
    // Pointer to a Base Class object
    BaseClass * base_class_pointer;
    
    BaseClass obj_base;
    DerviedClass obj_derived;

    // stored the address of derived class object to the pointer
    base_class_pointer = &obj_derived;  // Pointing base class pointer to derived class
    
    

    base_class_pointer -> var_base = 34;

    // base_class_pointer -> derived_base = 34;  --> Will show an error
    base_class_pointer -> display();  // Only runs the display function of base Class because object to derived class ka hai magar pointer Base class ka hai.


    base_class_pointer -> var_base = 3400;
    base_class_pointer -> display();

    // ***************************************************************************************************************************************************

    // Pointer of derived class pointing to derived class object

    DerviedClass * derived_class_pointer;
    derived_class_pointer = &obj_derived;
    
    derived_class_pointer -> var_base = 5390498;
    derived_class_pointer -> var_derived = 98;
    derived_class_pointer -> display();


    return 0;
}