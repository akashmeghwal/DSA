#include<iostream>
using namespace std;
int main(){
    int arr[101];
    int size;
    cout << "Enter the size of your array (max 100!)" << endl;
    cin >> size;
    cout << "Enter your array elements\n";
    for (int i = 0; i < size;i++){
        cin >> arr[i];
    }
    int minm = INT8_MAX;
    int maxm = INT8_MIN;
     
    for (int i = 0; i < size; i++)
    {
        maxm = max(maxm, arr[i]);
        minm = min(minm, arr[i]);
    }
    cout << "max is " << maxm << " and min is " << minm;
    return 0;
}