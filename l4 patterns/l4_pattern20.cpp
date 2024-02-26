/*
****
 ***
  **
   *
*/  

#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter a no" << endl;
    cin >> n;
    int i = 0;
    while (i <n)
    {
        int j = 0,k=0;
        while(k<=i){
            cout << " ";
            k++;
        }
        while(j<(n-i)){
            cout << "*";
            j++;
        }
       
        cout << endl;
        i++;
    }
}