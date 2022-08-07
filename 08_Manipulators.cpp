#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int a = 3, b = 78, c = 1245;
    cout << "The value of a without setw is : " << a << endl;
    cout << "The value of a without setw is : " << b << endl;
    cout << "The value of b without setw is : " << c << endl;

    //  Means set width of 4 in each execution...!!
    cout << "The value of b is : " << setw(4) << a << endl; 
    cout << "The value of c is : " << setw(4) << b << endl;
    cout << "The value of c is : " << setw(4) << c << endl;
    

    return 0;
}