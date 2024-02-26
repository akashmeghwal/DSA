#include<iostream>
using namespace std;
int getLength(char arr[]){
    int length = 0, i = 0;
    while(arr[i]!='\0'){
        length++;
        i++;

    }
    return length;
}
int main(){
    char ch[100];
    cin.getline(ch, 100);

    cout << getLength(ch);
}