/*
1
23
345
456
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
        int count = i;
        while(j<=i){
            cout <<count+1<<"  ";
            count++;
            j++;
        }
        cout << endl;
        i++;
    }
}
