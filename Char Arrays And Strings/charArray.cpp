#include<iostream>
using namespace std;

int main(){
    char name[100];
    cin >> name;
//cin can't read spaces newline and tabs 
//that's why if you enter "Akash Meghwal" the it will only print Akash
    cout << name;
    return 0;
}