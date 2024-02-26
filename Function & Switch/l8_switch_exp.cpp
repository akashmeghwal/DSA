#include<iostream>
using namespace std;

int main(){
    int val;
    cin >> val;
    //worked with int,-ve,char as exp
    //not worked with string,float,bool as exp
    //can't make same cases
   // can't provide a exp as case bcoz switch works with constant cases
    switch (val)
    {
    case 1:
        cout << "hi";
        break;
    case 2:
        cout << "bye";
        break;
    case 3:
        cout << "Bye bye";
        default:
        cout << "hello";
        break;
    }
}