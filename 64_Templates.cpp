// Getting started with Templates...!!

#include<iostream>
using namespace std;

template <class T> 
// T ek variable hai jo hum specify karenge badme
// means jaha jaha pe "T" hai wahah hum ek variable assign karenge and we will specify it later.

class vector{

    public:
        T * arr;
        int size;

        vector(int m){
            size = m;
            arr = new T[size];
        }

        T dotProduct(vector &v){
            T d = 0;
            for (int i = 0; i < size; i++)
            {
                d += this -> arr[i] * v.arr[i];
            }
            return d;
        }
        
};

int main()
{
    vector <int> v1(3);
    v1.arr[0] = 4;
    v1.arr[1] = 3;
    v1.arr[2] = 1;
    
    vector <int>v2(3);
    v2.arr[0] = 1;
    v2.arr[1] = 0;
    v2.arr[2] = 1;

    int a = v1.dotProduct(v2);
    cout << "The value of dot product is: " << a << endl;



    // *************************************************************************************************************************
    // Now what if we want to enter the float numbers and get a dot product.
    // For this we can't make classes again and again...!!

    vector <float> v3(3);
    v3.arr[0] = 4.3;
    v3.arr[1] = 3.6;
    v3.arr[2] = 1.2;
    
    vector <float> v4(3);
    v4.arr[0] = 1.1;
    v4.arr[1] = 0;
    v4.arr[2] = 1.8;

    float b = v3.dotProduct(v4);
    cout << "The value of second dot product is: " << b << endl;




    return 0;
}