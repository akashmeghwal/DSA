/*
1
2*3
4*5*6
7*8*9*10
7*8*9*10
4*5*6
2*3
1
*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int cnt = 1;
    int num = 0;
    //upper
    for (int i = 0; i < n; i++)
    {
     for (int j = 0; j < 2*i+1; j++)
     {  
        if(j%2==0)
            cout << cnt++;
        else
            cout << "*";
     }
     cout << endl;
    }
    cnt =cnt-n;
    //lower
    for (int i = 0; i < n; i++)
    {
     int k = cnt;
     for (int j = 0; j < n - i; j++)
     {
        if (j == n - i - 1)
            cout << k++;
            else
            cout << k++ << "*";
        }
        cnt = cnt-(n-i-1);
        cout << endl;
    }
    
}