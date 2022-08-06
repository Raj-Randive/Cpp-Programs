#include<iostream>
using namespace std;

int main(){
    
    // **************Reference Variables*****************
    float x = 455;

    float &y = x;  // Reference Variable
    cout << x << endl;
    cout << x << endl;



    // ***************Typecasting***************
    float a = 45.46; 
    cout << "The value of a is : " << a << endl;
    cout << "The value of a is : " << (int)a << endl;  //Typecasting
    cout << "The value of a is : " << int(a) << endl;  //Typecasting

 
    return 0;
}