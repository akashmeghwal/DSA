/*
flipped solid diamond

**** ****
***   ***
**     **
*       *
*       *
**     **
***   ***
**** ****

*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    //upper
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < 2*i+1; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < n-i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    //lower
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        for (int j=0; j < 2 * n - (2 * i + 1); j++)
        {
            cout << " ";
        }
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    
}