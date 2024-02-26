#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n = 10;
    int ans=1,i=1;
    if (n == 0 || n == 1)
        ans=1;
    else{
    while (i<=n )
    {
        ans = ans * i;
        i++;
    }
    cout << ans;
    }
}
