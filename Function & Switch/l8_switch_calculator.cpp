#include<iostream>
using namespace std;
int main(){
    int a,b;
    char ch;
    cout << "Enter two integers" << endl;
    cin >> a;
    cin >> b;
    cout << "Enter an operation" << endl;
    cin>>ch;
     
    switch(ch){
        case '+':
            cout << a+b;
            break;
        case '-':
            cout << a - b;
            break;
        case '*':
            cout << a * b;
            break;
        case '/':
            cout << a / b;
            break;
        case '%':
            cout << a % b;
            break;
        default:
            cout <<"Enter again!" << endl;
    }

}