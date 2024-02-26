/*
    *
   * *
  *   *
 *     *
*********   
*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for (int  i = 0; i < n; i++)
    {
        int j = 0;
        for (; j < n - i-1; j++)
        {
            cout << " ";
       }

       if (i==0||i==n-1)
       {
        for ( ; j < n+i; j++)
        {
            cout << "*";
        }
       }
       else
       {
        for (; j < n+i; j++)
        {
           if (j==n-i-1||j==n+i-1)
           {
               cout << "*";
           }
           else
               cout << " ";
        }
       }
       cout << endl;
    }
    
}
