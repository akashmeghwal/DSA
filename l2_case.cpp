#include<iostream>
using namespace std;
int main(){
    char ch;
    cout << "Enter a charector"<<endl;
    cin >>ch;
    if(ch>=65&&ch<=91)
        cout << "UPPER CASE";
    else if(ch>=97&& ch<=123)
        cout<<"lower case";
    else if(ch>=48 && ch<=57)
        cout << "Number";
    else
        cout << "enter a valid input!!";

    return 0;
}
