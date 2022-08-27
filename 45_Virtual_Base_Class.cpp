#include<iostream>
using namespace std;

/*
Inheritance...!!

student --> Test
student --> Sports
Test --> result
sports --> result
*/

class Student{
    
    protected:
        int roll_no;

    public:
        void set_number(int a){
            roll_no = a;
        }
        void print_number(){
            cout << "Your roll number is: " << roll_no << endl;
        }

};

class Test : virtual public Student{
    protected:
        float maths, physics;
    
    public:
        void set_marks(float m1, float m2){
            maths = m1;
            physics = m2;
        }
        void print_marks(void){
            cout << "Your result is here: " << endl
                 << "Maths: " << maths << endl
                 << "Physics: " << physics << endl;
        }
};

class Sports : virtual public Student{
    protected:
        float score;
    
    public:
        void set_score(float sc){
            score = sc;
        }
        void print_score(void){
            cout << "Your PT Score is here:  " << score << endl;
        }
};



class Result : public Test, public Sports{

    private:
        float total;
    
    public:
        void display(void){
            total = maths + physics + score;
            print_number();
            print_marks();
            print_score();
            cout << "Your total score is: " << total << endl;

        }
};


// Driver program to run the code
int main()
{
    Result Raj;
    Raj.set_number(420); 
    Raj.set_marks(99.3, 71.4);
    Raj.set_score(9);
    Raj.display();

    // Here in this code, the Roll Number was comming two times and therefore by using Virtual Base class we can solve it.

    return 0;
} 