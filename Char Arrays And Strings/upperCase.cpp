#include<iostream>

using namespace std;

void upperCase(char* ch){
    int i = 0;
    while (ch[i]!='\0')
    {
        if(ch[i]>='a'&&ch[i]<='z')
            ch[i] = ch[i] - 'a' + 'A'; 
        i++;
    }
}
int main(){
    char ch[100];
    cin.getline(ch, 100);
    upperCase(ch);
    cout << ch;
}