// this pointer

#include<iostream>
using namespace std;

class thisPointer{

    int a;

    public:
        void setData(int a){
            // a = a; // It will give a grabage value in a. It will not be able to set the Data.
            
            this -> a = a; 
        }

        void getData(){
            cout << "\nThe Value of a is: " << a <<endl;
        }
};

int main()
{

    // "this" is a keyword which is a pointer which points to the object which invokes the member functions.

    thisPointer obj1;
    obj1.setData(5);
    obj1.getData();
    

    return 0;
}