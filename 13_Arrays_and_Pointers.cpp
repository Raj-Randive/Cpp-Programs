#include<iostream>
using namespace std;

int main()
{
    // Pointers and Arrays...!!
    // Pointers Arithmetic

    int marks[] = {23, 45, 78, 91};

    int* p = marks;
    cout << "The value of *p is: " << *p << endl;  // Value at p (which is the first element of the array).
    cout << "The value of *(p+1) is: " << *(p+1) << endl;  // Value at p+1 (which is the first element of the array).
    cout << "The value of *(p+2) is: " << *(p+2) << endl;  
    cout << "The value of *(p+3) is: " << *(p+3) << endl << endl;
   

    cout << "The value of *(p++) is: " << *(p++) << endl;  // First it prints the value at p then increments it.
    cout << "The value of *(p) is: " << *(p) << endl;  // shows the incremented value of p by one.



    return 0;
}