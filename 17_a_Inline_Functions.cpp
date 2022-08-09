#include<iostream>
using namespace std;

// We define inline functions...!!
inline int product(int a, int b){
    return a*b;
} 

int main()
{
    int a, b;

    cout << "Enter the value of a and b : " << endl;
    cin >> a >> b;

    // When we call this function many times then -- toh pehle toh a and b copy honge then vo sab function se pass ho kar return me product denge and then vo cout print karega so all this things takes a lot of time if we see at compiler level so for that we USE INLINE FUNCTION....!!

    cout << "The product of a and b is : " << product(a, b) <<endl;
    cout << "The product of a and b is : " << product(a, b) <<endl;
    cout << "The product of a and b is : " << product(a, b) <<endl;
    cout << "The product of a and b is : " << product(a, b) <<endl;
    cout << "The product of a and b is : " << product(a, b) <<endl;
    cout << "The product of a and b is : " << product(a, b) <<endl;
    cout << "The product of a and b is : " << product(a, b) <<endl;
    cout << "The product of a and b is : " << product(a, b) <<endl;
    cout << "The product of a and b is : " << product(a, b) <<endl;
    cout << "The product of a and b is : " << product(a, b) <<endl;
  
    return 0;
}