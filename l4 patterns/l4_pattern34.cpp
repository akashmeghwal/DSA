/*
        1
       232
      34543
     4567654
    567898765    
*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int num = 0;
        for (int j = 0; j < n-i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j <=i ; j++)
        {
            num=i + j + 1;
            cout << num;
        }
        for (int j = 0; j < i; j++)
        {
            cout << num-1;
            num--;
        }
        cout << endl;
    }
    
}