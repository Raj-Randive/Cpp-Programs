// Pointers to objects

#include<iostream>
using namespace std;

class Complex{
    int real, imaginary;

    public:
        void getData(){
            cout << "The real part is: " << real << endl; 
            cout << "The imaginary part is: " << imaginary << endl; 
        }

        void setData(int a, int b){
            real = a;
            imaginary = b;
        }


};

int main()
{
    // Complex obj1;

    // Pointer to the object

    // Complex *ptr = &obj1;
    // (*ptr).setData(2, 6);
    // (*ptr).getData();

    // obj1.setData(2, 6);
    // obj1.getData();


    // Another Way of Making object
    Complex *ptr = new Complex;
    (*ptr).setData(2, 6);
    (*ptr).getData();

    

    return 0;
}