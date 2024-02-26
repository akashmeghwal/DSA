#include<iostream>
using namespace std;
int main(){
    int n,i=0,sum=0;
    cout << "enter a no " << endl;
    cin >> n;
    cout << "\n";
    while(i<=n){
        sum = sum + i;
        i=i+2;
    }
    cout << "sum is " << sum << endl;
    return 0;
}