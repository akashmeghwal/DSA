#include <iostream>
#include<math.h>
using namespace std;
int main(){
    unsigned int n;
    int i = 0;
    float ans;
    cout << "enter an no" << endl;
    cin >> n;
    while(n!=0){
        int bit=(~n)&1;
        cout << bit<<endl;
        ans = bit*(pow(10,i))+ans;
        n = n >> 1;
        i++;
    }
    cout << "Binary is -" << ans+1;
}