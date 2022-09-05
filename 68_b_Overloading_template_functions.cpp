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



//****************** Overloading ***********************

void func(int a){
    cout << "I am first func() " << a << endl;
}

template <class T>
void func(T a){
    cout << "I am a templatised func() " << a << endl;
}

template <class T>
void func1(T a){
    cout << "I am a templatised func1() " << a << endl;
}


int main()
{
    func(4); // Which func will be called ??
    // EXACT MATCH TAKES THE HIGHEST PRIORITY

    func1(4);

    return 0;
}