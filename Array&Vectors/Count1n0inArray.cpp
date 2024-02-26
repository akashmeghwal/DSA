#include<iostream>
using namespace std;
int main(){
    int arr[6]{1, 0, 1, 1, 0,1};
    int count1 = 0, count0 = 0; 
    for (int i = 0; i < 6; i++)
    {
        if (arr[i]==0)
        {
            count0++;
        }
        else
            count1++;  
    }
    cout << "Zeros " << count0 << " "
         << "Ones " << count1;
    return 0;
}