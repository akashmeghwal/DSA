#include<iostream>
using namespace std;
int getlength(char arr[]){
    int l = 0, i = 0;
    while (arr[i]!='\0')
    {
        l++;
        i++;
    }
    return l;
}
void reverse(char* ch){
    int i = 0,n=getlength(ch);
    int j = n - 1;
    while(i<=j){
        swap(ch[i], ch[j]);
        i++;
        j--;
        
    }
}
int main(){
 char ch[100];
    cin.getline(ch, 100);
    reverse(ch);
    cout << ch;
}