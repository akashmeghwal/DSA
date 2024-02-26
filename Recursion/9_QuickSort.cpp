#include<iostream>
using namespace std;

int partition(int arr[],int s,int e){
    int pivotIndex = e;
    int pivot = arr[pivotIndex];
    int i = s - 1;
    int j = s;
    while(j<pivotIndex){
        if (arr[j]<pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
        j++;
    }
    swap(arr[i+1], arr[pivotIndex]);
    return i+1;
}

void quickSort(int arr[],int s,int e){
    if(s>=e)
        return;
    int p = partition(arr, s, e);
    quickSort(arr, s, p - 1);
    quickSort(arr, p + 1, e);
}

int main(){
    int arr[10]{6, 5, 7, 4, 8, 3, 9, 1, 2, 11};
    quickSort(arr, 0, 9);
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}