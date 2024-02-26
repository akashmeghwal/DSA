#include<iostream>
using namespace std;
/* pattern1
   1111
   2222
   3333
   4444
*/
int main(){
    int n,i=0;
    cout << "Enter a no \n";
    cin >> n;
    while(i<n){
        int j=0;
        while(j<n){
            cout <<i+1 ;
            j++;
        }
        cout << endl;
        i++;
    }
}