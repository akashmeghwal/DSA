/*
AND &
OR  |
NOT ~
XOR ^
RIGHT SHIFT >>
LEFT SHIFT <<
*/

#include<iostream>
using namespace std;
int main(){
    int a = 4, b = 6;
    cout << "AND => " << (a&b) <<endl;
    cout << "OR  => " << (a|b) <<endl;
    cout << "NOT => " << ~a <<endl;
    cout << "XOR => " << (a^b) <<endl;
    cout << "LEFT => " << (b<<2) <<endl;
    cout << "RIGHT => " << (b>>2) <<endl;
    return 0;
}