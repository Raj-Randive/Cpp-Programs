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
    Removing elements from the list
        list1.pop_front();  //--> Removes element from the begining. 
        list1.pop_back();   //--> Removes element from the end.
        list1.remove(9);    //--> Removes all the occurances of that particular element.
    
    */
    /*
        list<int> :: iterator iter;
        iter = list1.begin();   -->  Matlab jo iter iterator hai vo list1 ke pehle element ko point karega.
        cout << *iter << " ";   -->  Pointing to the first element
        iter++;
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


    return 0;
}