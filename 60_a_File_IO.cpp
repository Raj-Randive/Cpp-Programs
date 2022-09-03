// File I/O in C++
// Using objects and classes

#include<iostream>
#include<fstream>
using namespace std;

/*

    The useful classses for working with files in C++ are;
    1. fstreambase
    2. ifstream --> Derived from fstreambase 
    3. ofstream --> Derived from fstreambase


    In order to work with files in C++, you will have to open it. There are two ways to open a file:
    1. Using the constructor
    2. 

*/

int main()
{
    string st = "Hello there...sample file...";
    string st2;

    // Opening files using Constructor and writing to it.
    // Object "out" of class "ofstream"
    ofstream out("sample.txt");  // Write Operation
    out << st;



    // ************************************************************************
    // Opening files using Constructor and reading it.
    ifstream in("sample2.txt"); // Read Operation

    // in >> st2; --> only gives a single word
    getline(in, st2);
    cout << "\n" << st2 << endl;
    getline(in, st2);
    cout << st2 << endl;
    getline(in, st2);
    cout << st2 << "\n" << endl;

    return 0;
}