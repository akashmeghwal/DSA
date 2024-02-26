/*
fibonacci
0 1 1 2 3 5 8 13 21.....
*/
#include<iostream>
using namespace std;
int main(){
    cout << "printing the fibonacci series" << endl;
    int n,a=0,b=1;
    cout << "Enter a no " << endl;
    cin>>n;
    cout << a << " " << b<<" ";
    for (int i = 3; i <= n;i++){
        int sum = a + b;
        cout <<sum<< " ";
        a=b,b=sum;
    }

        return 0;
}