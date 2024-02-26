/*
1234554321
1234**4321
123****321
12******21
1********1   
*/  

#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter a no" << endl;
    cin >> n;
    int i = 0;
    while (i<n)
    {
        int j = 1, k = 1;
        
        while(k<=(n-i)){
            cout <<k;
            k++;
        }
        while(j<=i&&i!=0){
            cout <<"**";
            j++;
        }
        int l = 0,m=n-i;
        while(l<(n-i)){
            cout << m ;
            m--;
            l++;
        }
            cout << endl;
        i++;
    }
}