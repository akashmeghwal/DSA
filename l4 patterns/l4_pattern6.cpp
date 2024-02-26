/*
*
**
***
****
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
        while(j<=i){
            cout <<"*";
            j++;
        }
        cout << endl;
        i++;
    }
}
