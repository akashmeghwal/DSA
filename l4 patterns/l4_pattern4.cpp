/*
1234
1234
1234
1234
*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter a no" << endl;
    cin >> n;
    int i = 0;
    while (i < n)
    {
        int j=0;
        while(j<n){
            cout <<j+1 ;
            j++;
        }
        cout << endl;
        i++;
    }
}