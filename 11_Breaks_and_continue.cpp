#include<iostream>
using namespace std;

int main()
{
    //*****************Break********************

    // for(int i=1; i<=20; i++){
        
    //     cout << i << endl;
    //     if (i ==9){
    //         break;
    //     } 
    // }

    // ****************Continue*****************
    for(int i=1; i<=20; i++){
        
        if (i ==9){
            continue;
        } 
        cout << i << endl;
    }

    // Here it did not print 9..!!

    return 0;
}