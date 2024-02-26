/*
1
23
456
78910
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
            cout <<count<<"  ";
            count++;
            j++;
        }
        cout << endl;
        i++;
    }
}
