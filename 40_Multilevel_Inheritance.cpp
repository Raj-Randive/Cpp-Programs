// Multilevel Inheritance...!!

#include<iostream>
using namespace std;

class Student{

    protected:
        int roll_number;

    public:
        void set_roll_number(int);
        void get_roll_number(void);

};

void Student :: set_roll_number(int r){
    roll_number = r;
}

void Student :: get_roll_number(void){
    cout << "The roll number is : " << roll_number << endl;
}


// ********************************************************

class Exam : public Student{

    protected:
        float math;
        float phy;

    public:
        void set_marks(float, float);
        void get_marks(void);

};

void Exam :: set_marks(float m, float p){
    math = m;
    phy = p;
};
void Exam :: get_marks(void){
    cout << "The marks obtained in Maths are: " << math << endl;
    cout << "The marks obtained in Physics are: " << phy << endl;
};

// ********************************************************

class Result : public Exam{

    float percentage;

    public:
        void display_result(){
            get_roll_number();
            get_marks();
            cout << "Your result is : " << (math+phy)/2 << "%" << endl;
        }

};





int main()
{
    Result Mike;
    Mike.set_roll_number(410);
    Mike.set_marks(94.4 , 90.3);
    Mike.display_result();
    

    return 0;
}