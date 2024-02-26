#include<iostream>
using namespace std;

int pivotIndex(int arr[],int n){
    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;
    while(s<e){
        if(arr[mid]>arr[0]){
            s = mid + 1;
        }
        else
            e = mid;
        mid = s + (e - s) / 2;
    }
    return s;
}

int main(){
    int arr[7]{5, 6, 7, 1, 2, 3, 4};
    cout << "the index of pivot is " << pivotIndex(arr, 7) << " and pivot is " << arr[pivotIndex(arr, 7)];
}