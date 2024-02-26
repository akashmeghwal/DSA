#include<iostream>
using namespace std;
int main(){
    int arr[101];
    int size,sum=0;
    cout << "Enter the size of your array (max 100!)" << endl;
    cin >> size;
    cout << "Enter your array elements\n";
    for (int i = 0; i < size;i++){
        cin >> arr[i];
    }
    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }
    cout << "Sum of array's elements is " << sum;
    return 0;
    }