#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout << "Enter a no " << endl;
    cin>>n;
    for (int i = 0; i <= n;i++){
        sum = sum + i;
    }
    cout << "Sum is " << sum;
    return 0;
}