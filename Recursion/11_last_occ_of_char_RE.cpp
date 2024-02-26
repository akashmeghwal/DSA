#include<iostream>
#include<vector>
using namespace std;
//L to R
void lastOcc(string &s,int i,char target,int &ans){
    int e = s.size();
    if(i>=e){
        return;
    }
    //1 case solve
    if(s[i]==target){
        ans = i;
    }
    lastOcc(s, i + 1, target, ans);
}
//R to L
void lastOcc2(string &s, int i, char target, int &ans)
{
   
    if (i < 0)
    {
        return;
    }
    // 1 case solve
    if (s[i] == target)
    {
        ans = i;
        return;
    }
    lastOcc2(s, i -1, target, ans);
}
int main(){
    string s;
    int ans = -1;
    cin >> s;
    char ch;
    cin >> ch;
    lastOcc2(s, s.size()-1, ch, ans);
    cout << ans;
}