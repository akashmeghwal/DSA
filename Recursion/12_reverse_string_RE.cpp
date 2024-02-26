#include<iostream>
using namespace std;
void reverseString(string &s,int f,int l){
    if(f>l){
        return;
    }
    //first case
    swap(s[f], s[l]);
    //recursion
    reverseString(s, f + 1, l - 1);
}
int main(){
    string s;
    cin >> s;
    reverseString(s,0,s.size()-1);
    cout << s;
}