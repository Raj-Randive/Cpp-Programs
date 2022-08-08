#include<iostream>
using namespace std;

int main()
{
    int marks[] = {23, 45, 78, 91};
    cout << "These are just marks:  "<< endl;
    cout << marks[0] << endl;
    cout << marks[1] << endl;
    cout << marks[2] << endl;
    cout << marks[3] << endl << endl;


    // Or make an array like this also...!!
    int mathMarks[4];
    mathMarks[0] = 435;
    mathMarks[1] = 535;
    mathMarks[2] = 675;
    mathMarks[3] = 492;
    cout << "These are the mathMarks: " << endl;
    cout << mathMarks[0] << endl;
    cout << mathMarks[1] << endl;
    cout << mathMarks[2] << endl;
    cout << mathMarks[3] << endl << endl;


    // *******************************Printing using for loop************************************

    cout << "Printing using FOR LOOP...!!" << endl;
    for (int i = 0; i < 4; i++)
    {
        cout << "The value of marks " << i << " is: " << marks[i] << endl;
    }
    

    return 0;
}