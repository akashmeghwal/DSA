/*
1
21
321
4321
*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter a no" << endl;
    cin >> n;
    int i = 1;

    while (i <= n)
    {
        int j=1,count=i;
        while(j<=i){
            cout <<count<<"  ";
            count--;
            j++;
        }
        cout << endl;
        i++;
    }
}
