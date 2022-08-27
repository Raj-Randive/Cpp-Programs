#include<iostream>
using namespace std;

    struct employee{

        int id;
        char favChar;
        float salary;

    };

    typedef struct student{
        int rollNo;
        char favChar;
        float marks;

    }stu;

int main()
{
    struct employee Raj;
    Raj.id = 1;
    Raj.favChar = 'r';
    Raj.salary = 1200000;

    // *******************************************
    struct employee Mike;
    Mike.id = 2;
    Mike.favChar = 'm';
    Mike.salary = 1000000;

    
    
    cout << Raj.salary << endl;
    cout << Raj.id << endl;    
    cout << Raj.favChar << endl;   



    // ************************************************************
    // Using Typedef

    stu Dustin;
    Dustin.rollNo = 499;

    cout << endl << Dustin.rollNo <<endl;

    return 0;
}