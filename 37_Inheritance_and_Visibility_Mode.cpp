// Inheritance
 
#include<iostream>
using namespace std;

// This our base class
class Employee{

    public:
    int id;
    float salary;
        Employee(int inpId ){
            id = inpId;
            salary = 35.0;
        }

        Employee(){} // A default constructor which helps in giving no errors...!!

};

/*  // Inheriting a class syntax

    class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}  // Double curly braces means that word is going to be replaced by some other word...!!
    {
        members/methods/etc....
    }
*/

// Creating a programmer class derived form Employee Base class...!!
class Programmer : Employee{
    
    public:
        int languageCode;
        Programmer(int Id_of_programmer){
            id = Id_of_programmer; // if id is a private member of base class then it will give us an error while if it is not then it will work
            
            languageCode = 9;
        }

        void getData(){
            cout << id << endl;
        }
};


/*
    NOTE:
    1. Default Visibility mode is Private.
    2. Private Visibility Mode: Public members of the base class becomes Private members of the derived class.
    3. Public Visibility Mode: Public members of the base class becomes Public members of the derived class.
*/



int main()
{
    Employee Mike(1), Robin(2); 
    cout << Mike.salary << endl;
    cout << Robin.salary << endl;

    Programmer Dustin(7);
    cout << "\n" <<Dustin.languageCode << endl;
    // cout << Dustin.id << endl; // It is not accesible as Public members of base class are now Private members of Derived Class.
    Dustin.getData();

    return 0;
}