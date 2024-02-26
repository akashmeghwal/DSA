#include <iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    int i = 0;
    float ans;
    cout << "enter an Binary" << endl;
    cin >> n;
    while(n!=0){
        int digit = n % 10;
        ans = digit*(pow(2,i))+ans;
        n = n / 10;
        i++;
    }
    cout << "Number is " << ans;
}