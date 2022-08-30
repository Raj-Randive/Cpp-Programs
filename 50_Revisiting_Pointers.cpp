// Pointers Revision and 
// New Keyword

#include<iostream>
using namespace std;

int main()
{
    // Basic Example
    int a = 3;
    int* ptr = &a;
    cout << "The address of a is: " << &a << endl;
    cout << "The address of a is: " << ptr << endl;
    cout << "The value at a is: " << a << endl;
    cout << "The value at a is: " << *ptr << endl;


    // ************************************************************************************************************************
    // New Keyword!

    // int *ptr1 = new int(40);
    float *ptr1 = new float(40.564);
    cout << "\nThe value at address p is: " << *(ptr1) <<endl; 


    // Making an Array Dynaically...!!
    int *arr = new int[3];
    arr[0] = 10;
    arr[1] = 11;
    *(arr + 2) = 19;

    cout << "\nBefore Delete keyword" << endl;
    cout << "The value of arr[0] is: " << arr[0] << endl;
    cout << "The value of arr[1] is: " << arr[1] << endl;
    cout << "The value of arr[2] is: " << arr[2] << endl;


    // ************************************************************************************************************************
    
    // Delete Operator!
    
    delete[] arr;
    cout << "\nAfter Delete keyword" << endl;
    cout << "The value of arr[0] is: " << arr[0] << endl;
    cout << "The value of arr[1] is: " << arr[1] << endl;
    cout << "The value of arr[2] is: " << arr[2] << endl;


    
    return 0;
}