/*
ABC
DEF
GHI
*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter a no" << endl;
    cin >> n;
    int i = 0,count=0;
    char ch = 'A';
    while (i < n)
    {
        int j=0;
        while(j<n){
            cout <<char(count+ch);
            count++;
            j++;
        }
        cout << endl;
        i++;
    }
}