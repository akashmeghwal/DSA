/*
i++
++i
--i
i--
*/

#include<iostream>
using namespace std;
int main(){
    int i = 8;
    int a = 5;
    cout << (++a) * (++a) << endl;
    //due to same memory location and operator precedence it will return 49
    cout << "post inc => " << i++ <<endl;
    cout << "pre inc  => " <<++i <<endl;
    cout << "post dec => " << i-- <<endl;
    cout << "pre dec => " << --i <<endl;
    return 0;
}