/*
1  2  3  4
5  6  7  8
9  10 11 12
13 14 15 16
*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter a no" << endl;
    cin >> n;
    int i = 0 ,count=1;
    while (i < n)
    {
        int j=0;
        while(j<n-i+1){
            cout <<count<<"  ";
            j++;
            count++;
        }
        cout << endl;
        i++;
    }
}