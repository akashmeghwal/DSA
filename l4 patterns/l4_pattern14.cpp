/*
A
BB
CCC
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
            cout <<char(i+ch);
            j++;
        }
        cout << endl;
        i++;
    }
}