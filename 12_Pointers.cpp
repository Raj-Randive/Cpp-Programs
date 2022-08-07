#include<iostream>
using namespace std;

int main()
{
    int a = 6;
    int* b; // Shows b is a pointer to (Written in next line)
    b = &a;

    // & ----> (Address of) operator
    cout << "The address of a is: " << &a << endl;
    cout << "The address of a is: " << b << endl << endl;
    // b is a variable in which we have stored the address of a...!!

    // ****************** What is the Value *************************
    // * ----> (dereference) operator
    cout << "The value at address b is: " << *b << endl << endl;



    //************ Storing the address of the pointers **************
    //******************* Pointer to Pointer ************************
    int** c;
    c = &b;
    cout << "The address of pointer b is: "<< &b << endl;
    cout << "The address of pointer b is: "<< c << endl;
    cout << "The value at address c is (of pointer b) is: "<< *c << endl; 
    // Value will be address_of_b

    cout << "The value at address Value_at(value_at(c)) is: "<< **c << endl;
    // Here by (**) we will get the value at c, and uske andar ka bhi value which is 6...

    return 0;
}