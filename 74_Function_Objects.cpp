// STL - Standard Template Libraries...!!
// Getting started with Function Objects  !

#include<iostream>
#include<functional>
#include<algorithm>
using namespace std;


int main()
{
    // Function Objects: Fuction wrapped in a class so that it is available like an object.

    int arr[] = {1, 45, 14, 23, 7, 9};
    /* 
    We want to sort it:  --> Two ways are there: 
        1) Ascending order
        2) Descending order
    */

    sort( arr, arr+6, greater<int> () ); 
    // Means arr[0] se leke arr[6] tak sare elements sort ho gaye...!!
    // Greater<int> ()  -->  ye ek object hai and which means ki Decending order me sort kar do

    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
    


    return 0;
}