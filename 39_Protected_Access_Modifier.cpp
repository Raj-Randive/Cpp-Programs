#include<iostream>
using namespace std;

class Base{

    protected:
        int a; // Not very sensitive (lets say)
    
    private:
        int b; // Very Sensitive (lets say)

};

/*

 

*/

class Derived : protected Base{
    // we want to inherit "variable a" but a is private and can't be inherited so what to do?
    // Also we can't simple make "a" public for some reasons.

};

int main()
{
    Base obj1;
    Derived o1;
    
    // cout << obj1.a;  --> Can't do this as it is protected...!!
    
    // cout << o1.a;  --> Can't do this as it is protected...!!
    
    // Will not work as "a" is protected in both "Base" as well as "Class".

    

    return 0;
}