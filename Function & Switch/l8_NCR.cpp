#include<iostream>
using namespace std;
int factorial(int n){
    int ans = 1;
    if(n==0||n==1)
        return 1;
    for (int i = n; i != 0; i--)
    {
        ans = ans * i;
}
return ans;
}

int ncr(int n,int r){
return factorial(n) / (factorial(r) * factorial(n - r));
}

int main(){
int a, b;
cout << "enter values for nCr" << endl;
cin >> a >> b;
cout << "Answer is " << ncr(a, b);
}