/*
D
CD
BCD
ABCD
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter a no" << endl;
    cin >> n;
    int i = 0;
    char ch = 'A';
    while (i < n)
    {
        int j=0;
        while(j<=i){
            cout <<char(n-i+j+ch-1)<<" ";
            j++;
        }
        cout << endl;
        i++;
    }
}