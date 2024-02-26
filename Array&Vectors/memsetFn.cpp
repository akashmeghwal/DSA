#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char str[] = "AkashDamdiya";
    memset(str, 't', sizeof(str));
    cout << str;
    return 0;
}