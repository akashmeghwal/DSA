#include<iostream>
using namespace std;
/* pattern1
    ****
    ****  
    ****
    ****
*/
int main(){
    int n,i=0;
    cout << "Enter a no \n";
    cin >> n;
    while(i<n){
        int j=0;
        while(j<n){
            cout << "*";
            j++;
        }
        cout << endl;
        i++;
    }
}