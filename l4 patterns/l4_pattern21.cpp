/*
   1
  121
 12321
1234321   
*/  

#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter a no" << endl;
    cin >> n;
    int i = 1;
    while (i<=n)
    {
        int j = 1, k = 1;
        
        while(k<=(n-i)){
            cout << " ";
            k++;
        }
        while(j<=i){
            cout << j;
            j++;
        }
        int l = 1,m=i;
        while(l<=(i-1)){
            cout << m - 1;
            m--;
            l++;
        }
            cout << endl;
        i++;
    }
}