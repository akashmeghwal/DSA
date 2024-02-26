#include<iostream>
using namespace std;
int Ap(int n){
    return 3 * n + 7;
}

// Ap=3*n+7
int main(){
int n;
cout << "Enter the no of term" << endl;
cin >> n;
cout << "Answer is " << Ap(n);
}
