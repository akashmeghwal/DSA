#include<iostream>
using namespace std;

int main(){
    int arr[7]{1, 2, 3, 4, 5, 6};
    
    for ( int start = 0,end=5;start<=end; start++,end--)
    {
        if(start==end)
        cout << " "<<arr[start] << " ";
        else
        cout << " "<<arr[start] << " " << arr[end];
    }
    return 0;
}