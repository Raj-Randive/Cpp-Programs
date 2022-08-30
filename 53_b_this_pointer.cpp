// this pointer -> returning an object...!!

#include<iostream>
using namespace std;

class thisPointerClass{

    int a;

    public:
        thisPointerClass & setData(int a){
            // a = a; // It will give a grabage value in a. It will not be able to set the Data.
            
            this -> a = a; 

            return *this;
        }

        void getData(){
            cout << "\nThe Value of a is: " << a <<endl;
        }
};

int main()
{

    // "this" is a keyword which is a pointer which points to the object which invokes the member functions.

    thisPointerClass obj1;
    obj1.setData(5).getData();
    // obj1.getData();
    

    return 0;
}