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

bool checkPallindrom(char* ch){
    int i = 0, j = getlength(ch)-1;
    while (i <= j)
    {
    if(ch[i]==ch[j])
        return false;
    i++;
    j--;
   }
   return true;
}
int main(){
    char ch[100];
    cin.getline(ch, 100);
    cout<<checkPallindrom(ch);
}
