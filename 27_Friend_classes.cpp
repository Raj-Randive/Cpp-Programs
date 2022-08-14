#include<iostream>
using namespace std;
// Is program me hum ne ek class ke function ko dusre class ka friend banaya.



// Forward Declaration --> Just to make complier know ki aage complex name ka function aane wala hai.
class complex;

class calculator{
    public:
        int add(int a, int b){
            return (a+b);
        }
        
        int sumRealComplex(complex , complex);
        int sumImgComplex(complex , complex);
}; 


class complex{
    int a, b;
    
    public:
        void setNumber(int n1, int n2){
            a = n1; 
            b = n2; 
        }

        // friend complex sumComplex(complex o1, complex o2);  --> Here this won't work.

    
        // Individually declaring functions as friends..!!
        friend int calculator :: sumRealComplex(complex o1, complex o2);
        friend int calculator :: sumImgComplex(complex o1, complex o2);


        //Alternative: Declaring the entire Calculator class as friend
        friend class calculator;





        void printNumber(){
            cout << "Your Number is: " <<a<< " + " <<b<< "i" << endl;
        }
};


int calculator :: sumRealComplex(complex o1, complex o2){
    return (o1.a + o2.a);
}

int calculator :: sumImgComplex(complex o1, complex o2){
    return (o1.b + o2.b);
}



int main()
{
    complex o1, o2;
    o1.setNumber(1, 4);
    o2.setNumber(5, 7);

    
    calculator object_calc; 
    // Made an object of name object_calc

    int res = object_calc.sumRealComplex(o1, o2);
    int resc = object_calc.sumImgComplex(o1, o2);

    cout << "The sum of real part of o1 and o2 is: " << res <<endl;
    cout << "The sum of imaginary part of o1 and o2 is: " << resc <<endl;


    return 0;
}