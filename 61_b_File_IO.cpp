// File I/O in C++
// Using objects and classes

#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    // COnnecting our file to rout stream...!! 
    ofstream rout("sample.txt");

    // Creating a name string and filling it with the string entered by the user
    cout << "Enter your name: " ;
    string name;
    cin >> name; 

    // Writing a string to the file...!!
    rout << "My name is: " + name;
    rout.close();

    // **************************************************************

    // Reading the file.
    ifstream rin("sample.txt");
    string content;
    // rin >> content; --> Only one word will we printed
    getline(rin, content);
    cout << "The content of the file is : " << content;
    rin.close();

    return 0;
}