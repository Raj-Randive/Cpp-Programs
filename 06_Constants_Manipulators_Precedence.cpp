#include<iostream>
using namespace std;

int c=45;
int main(int argc, char const *argv[])
{
    // ****************************Build in Data Types***************************
    int a, b, c;
    cout << ("Enter the value of a : ");
    cin >> a;
    cout << ("Enter the value of b : ");
    cin >> b;

    c = a + b;
    cout << ("The sum is : ") << c << endl;

    cout << "The global c is : " <<::c;  // Global Variable 
    cout << endl << endl;
    
    
    // ****************************Float, double, and long double Literals***************************
    
    float d = 34.4F;
    // or float d = 34.4f;
    
    long double e = 34.4;
    cout << "The value of d is : " << d << endl << "The value of e is : " << e << endl; 

    cout << "The size of 34.4 " << sizeof(34.4) << endl;
    cout << "The size of 34.4 " << sizeof(34.4F) << endl;
    cout << "The size of 34.4 " << sizeof(34.4f) << endl;
    cout << "The size of 34.4 " << sizeof(34.4l) << endl;
    cout << "The size of 34.4 " << sizeof(34.4L) << endl;

    
    return 0;
}
