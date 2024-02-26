/*
A
ABA
ABCBA
ABCDCBA
ABCDEDCBA
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    char ch = 'A';
    for ( int i = 0; i < n; i++)
    {
        int cnt = i-1;
        for (int j = 0; j < 2*i+1; j++)
        {
            
            if (j<=i)
            {
                cout << char(ch + j);
            }
            else{
                cout << char(ch + cnt);
                cnt--;
            }  
        }
        cout << endl;
    }
    
}