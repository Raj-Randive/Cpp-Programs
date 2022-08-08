#include<iostream>
using namespace std;


// #1 - Return Value Function

int sum(int a, int b){
    int c = a+b; 
    return c;
}

int main()
{
    int num1, num2;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    cout << endl << "The sum is: " << sum(num1, num2) << endl;

    return 0;
}