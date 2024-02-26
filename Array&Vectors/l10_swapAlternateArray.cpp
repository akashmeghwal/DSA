#include<iostream>
using namespace std;
void printArray(int arr[],int n){
     cout << "Alternatively swaped  array\n";
    for (int  i = 0; i < n; i++)
    {
        cout << arr[i]<<" ";
     }
}


int main(){
    int arr[101];
    int size;
    cout << "Enter the size of your array (max 100!)" << endl;
    cin >> size;
    cout << "Enter your array elements\n";
    for (int i = 0; i < size;i++){
        cin >> arr[i];
    }
    for (int i = 0; i < size; i=i+2)
    {
        if(i+1<size)
        swap(arr[i], arr[i + 1]);
    }
    printArray(arr, size);
    return 0;
        }
