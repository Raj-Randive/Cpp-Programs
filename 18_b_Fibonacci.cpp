#include<iostream>
using namespace std;

int fib(int n){
    if (n<=1){
        return 1;
    }
    return fib(n-2) + fib(n-1);
}

int main()
{
    int a;
    cout << "Enter any Number: ";
    cin >> a;
    cout << "The term in fibonacci sequence at position " << a << " is " << fib(a) <<endl;

    return 0;
}