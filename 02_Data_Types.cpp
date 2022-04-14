#include <iostream>
using namespace std;

int main()
{
    int a = 4, b = 6;
    float pi = 3.14;
    char c = 'r';
    bool Statement1 = true;
    bool Statement2 = false;

    cout << "My name is Raj." << "\nThe value of a is: "<< a << ". \nThe value of b is: "<< b << ". \nThe value of pi is: "<< pi;
    cout<<"\nThe value of char is: "<< c;

    cout<<"\n"<<Statement1; 
    // Output is "1" which indicates the value is true.
    cout<<"\n"<<Statement2; 
    // Output is "0" which indicates the value is false.

    return 0;
}