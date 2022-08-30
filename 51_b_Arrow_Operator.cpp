// Arrow Operator...!!

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

    Complex *ptr = new Complex;
    ptr -> setData(2, 43); // Arrow Operator
    ptr -> getData();


    // Array of objects
    Complex *ptr1 = new Complex[4];  
    ptr1 -> setData(24, 76); // Arrow Operator
    ptr1 -> getData();

    (ptr1 + 1) -> setData(43, 99);
    (ptr1 + 1) -> getData();

    (ptr1 + 2) -> setData(33, -3);
    (ptr1 + 2) -> getData();

    

    return 0;
}