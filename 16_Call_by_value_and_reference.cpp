#include<iostream>
using namespace std;

// This function won't work as we have given the copy of x and y...!!
// So to actually swap them we have to provide the addess of x and y, so that we can change the value directly from the address...!!

//  #1 Call by Value
void swap(int a, int b){

    int temp = a;
    a = b;
    b = temp;
}


// This function has a direct address of x and y. So by this change the value of x and y.

//  #2 Call by Reference using Pointers
void swapPointer(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp; 
}

// #3 Call by Reference using C++ Reference Variables...!!
void swapReferenceVar(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}



int main()
{
    int x = 4, y = 5;
    cout << "The value of x and y before swapping is: " << x << ", " << y << endl;

    // ***************** Call by Value ****************************
    // swap(x, y);

    // *************** Call by Reference **************************
    // swapPointer(&x, &y);  

    // *************** Call by Reference using C++ ****************
    swapReferenceVar(x, y);

    cout << "The value of x and y after swapping is: " << x << ", " << y << endl;

    return 0;
}