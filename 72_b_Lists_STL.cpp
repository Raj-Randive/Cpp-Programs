// STL - Standard Template Libraries...!!
// Getting started with List !

#include<iostream>
#include<list>
using namespace std;


void display(list<int> &l){

    list<int> :: iterator iter;
    for (iter = l.begin();  iter != l.end();  iter++)
    {
        cout << *iter << " ";
    }

    cout << "\n\n";

}

int main()
{
    list<int> list1; // List of 0 length
    
    list1.push_back(5);
    list1.push_back(7);
    list1.push_back(1);
    list1.push_back(9);
    list1.push_back(9);
    list1.push_back(12);

    /*
        SORTING THE LIST
        list1.sort();
    */

    

    display(list1);



    // *****************************************************************************************************************************************************

    list<int> list2(3); // Empty list of size 3.
    list<int> :: iterator iter;
    iter = list2.begin();
    *iter = 45;
    iter++;
    *iter = 58;
    iter++;
    *iter = 69;
    display(list2);


    // MERGING THE ELEMENTS OF TWO LISTS...!!
    list1.merge(list2);
    list1.sort();
    list2.sort();
    cout << "list1 After merging: ";
    display(list1);

    // REVERSING THE ELEMENTS OF LISTS...!!
    cout << "list1 After reversing: ";
    list1.reverse();
    display(list1);

    return 0;
}