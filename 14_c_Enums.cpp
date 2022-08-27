#include<iostream>
using namespace std;



int main()
{
    enum Meal{ Breakfast, lunch, dinner};  // Now this has become one data type and we can store numbers to it...!! 
    cout << Breakfast << endl;
    cout << lunch << endl;
    cout << dinner << endl << endl;

    // Or defined by..

    Meal m1 = Breakfast;
    cout << m1 << endl;
    cout << (m1==1) << endl;  // gives 0 means false
    cout << (m1==0) << endl; // gives 1 means true 
    

    return 0;
}