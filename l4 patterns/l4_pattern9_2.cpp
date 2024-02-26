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
        int j=0;
        while(j<i){
            cout <<i-j<<"  ";

            j++;
        }
        
        cout << endl;
        i++;
    }
}
