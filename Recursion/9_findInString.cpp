#include<iostream>
#include<vector>
#include<string>

using namespace std;
 
void search(string &s,int index,int size,char key){
if(index>=size) {
    return;

} 
if(s[index]==key){
    cout << index << " ";
}
search(s, index + 1, size, key);
}

int main(){
  string str="Babbar";
  char ch;
  cin >> ch;
  search(str,0,str.size(),ch);
}