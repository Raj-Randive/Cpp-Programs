// STL - Standard Template Libraries...!!
// Getting started with Maps !

#include<iostream>
#include<map>
#include<string>
using namespace std;



int main()
{
    // Map is an Associative array

    map<string, int> marksMap;
    marksMap["Raj"]= 99; 
    marksMap["Mike"]= 95; 
    marksMap["Dustin"]= 78;

    marksMap.insert( { {"Jake" , 72}, {"Murphy", 43} } ); 

    map<string, int> :: iterator iter;
    for ( iter = marksMap.begin();  iter != marksMap.end() ; iter++)
    {
        cout << (*iter).first << " " << (*iter).second << "\n" ;
    }

    // The first represents "KEY" and the second represents a "VALUE" at that "KEY"
    
    cout << "The size is: " << marksMap.size() << endl;
    cout << "The max size is: " << marksMap.max_size() << endl;
    cout << "The empty's return value is: " << marksMap.empty() << endl;
    

    return 0;
}