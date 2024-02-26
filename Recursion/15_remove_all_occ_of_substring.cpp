#include<iostream>
using namespace std;
void remove_occ(string &s,string &part){
if(s.find(part)==string::npos){
    return;
}
else{
    int pos = s.find(part);
    s.erase(pos, part.length());
    remove_occ(s, part);
}
}
int main(){
string s;
string part;
cin >> s >> part;
remove_occ(s, part);
cout << s;
}