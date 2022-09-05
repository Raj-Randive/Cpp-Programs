// Function Templates

#include<iostream>
using namespace std;

// float funAvg(int a, int b){
//     float avg = ((float)(a+b)/(float)2);
//     return avg;
// }

// float funAvg2(int a, float b){
//     float avg = ((float)(a+b)/(float)2);
//     return avg;
// }

// So that a wrap --> Means agar humko bar bar datatypes change karne hai then humko bar bar function likhne padenge. SO WE WILL USE FUNCTION TEMPLATES INSTEAD...!!

// **********************************************************************************

template <class T1, class T2>
float funAvg(T1 a, T2 b){
    float avg = ((float)(a+b)/(float)2);
    return avg;
}

int main()
{
    float a, b;
    a = funAvg(5.33, 2.78);
    cout << "\nThe Average of two numbers is: " << a << endl;

    // b = funAvg2(5, 2.56);
    // cout << "\nThe Average of two numbers is: " << b << endl;

    return 0;
}