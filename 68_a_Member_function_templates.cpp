// Member function templates and 
// overloading template functions...!!

#include<iostream>
using namespace std;

template <class T>
class Raj{

    public:
        T data;

        Raj(T a){
            data = a;
        }
        
        // // But what if we want to print this outside the display() function...!
        // void display(){
        //     cout << "\nThe value of data is: " << data << endl;
        // }

        void display();

};

template <class T>
void Raj <T> :: display(){
    cout << "\nThe value of data is: " << data << endl;
}


int main()
{
    // Raj <int> r(6);
    // Raj <float> r(6.76);
    // Raj <char> r('r');
    Raj <string> r("Hello my name is Raj!");
    // cout << r.data;
    r.display();
    

    return 0;
}