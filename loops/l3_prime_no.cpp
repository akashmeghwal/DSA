#include<iostream>
using namespace std;
int main(){
    int n;
    cin >>n ;
    int i = 2,cnt=0;
    
    while(i<n){
        if(n%i==0){
            cnt = 1;
            break;
        }
        i++;
    }
    if(cnt==1||n==2)
        cout << "not prime";
    else
        cout << "prime";
    return 0;

}