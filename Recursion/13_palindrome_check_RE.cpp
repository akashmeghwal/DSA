#include<iostream>
using namespace std;
bool check(string &str,int s,int e){
    //bc
    if(s>=e){
        return true;
    }
    //1st case
    if (str[s]!=str[e])
    {
        return false;
    }
    return check(str, s + 1, e - 1);
}
int main(){
    string s;
    cin >> s;
    cout << check(s,0,s.size()-1);
}