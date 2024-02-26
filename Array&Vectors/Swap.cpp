#include<iostream>
using namespace std;
void SwapAB(int* a,int* b){
    int c;
    c = *a;
    *a = *b;
    *b = c;
}



int main(){
    int a, b;
    cin >> a >> b;
  
    cout << a <<" "<< b;
}