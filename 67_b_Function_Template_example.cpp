// Swap function example using function templates...!!

#include<iostream>
using namespace std;

template <class T>
void funcSwap(T &a, T &b){
    T temp = a;
    a = b;
    b = temp;
}

int main()
{
    float x = 5; 
    float y = 9.87;
    
    // or
    // int x = 5; 
    // int y = 9.87;
    cout << "\nThe value of x and y before swapping: " << x << " and " << y << endl;
    
    funcSwap(x, y);
    cout << "\nThe value of x and y after swapping: " << x << " and " << y << endl;

    return 0;
}