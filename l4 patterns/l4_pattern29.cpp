/*
diamond pattern
    *
   * *
  * * *
  * * *
   * *
    *  
*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    //upper
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            cout << " ";
        }
        for (int k = 0; k <= i; k++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    //lower
    for (int l = 0; l < n; l++)
    {
        for (int j = 0; j < l; j++)
        {
            cout << " ";
        }
        for (int k = 0; k < n-l; k++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    
}