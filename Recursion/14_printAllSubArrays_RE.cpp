#include<iostream>
using namespace std;
void print_subArr(int arr[], int i,int size){
    int s = i, n = size;
    //bace case
    if(i>=size){
        return;
    }
    // 1st case
    for (int j = i; j < size;j++){
        cout << arr[j] << " ";
    }
    cout << endl;
    //recursion
    print_subArr(arr, i, size - 1);
    
}
void subArr(int arr[],int i,int size){
    for (int  j = i; j <size ; j++)
    {
        print_subArr(arr, j, size);
    }
    cout << endl;
}
int main(){
    int arr[10]{10,1, 2, 3, 4, 5,6,7,8,9};
    subArr(arr, 0,10);
}