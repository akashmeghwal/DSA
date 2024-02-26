#include<iostream>
#include<vector>
using namespace std;

void merge(int arr[], int s, int e,int mid){
    //size of new two arrays
    int lenleft = mid - s + 1;
    int lenright=e-mid;
    int mainArrInd = s;
    //dynamic allocation of these two arrays
    int *left = new int[lenleft];
    int *right = new int[lenright];
    //coping values from actual array
    for (int i = 0; i < lenleft; i++)
    {
        left[i] = arr[mainArrInd++];
    }
    for (int i = 0; i < lenright; i++)
    {
        right[i] = arr[mainArrInd++];
    }
    //merging
    mainArrInd = s;
    int i = 0, j = 0;
    while(i<lenleft&&j<lenright){
        if (left[i]<=right[j])
        {
            arr[mainArrInd++] = left[i++];
        }
        else{
            arr[mainArrInd++] = right[j++];
        } 
    }
    while(i<lenleft){
        arr[mainArrInd++] = left[i++];
    
    }
    while(j<lenright){
        arr[mainArrInd++] = right[j++];
    
    }
    delete[] left;
    delete[] right;
}

void mergeSort(int arr[],int s,int e){
    if(s>=e){
        return;
    }
    int mid=s+(e-s)/2;
    //recursion
    mergeSort(arr, s, mid);
    mergeSort(arr, mid + 1, e);
    //merge
    merge(arr, s, e,mid);
}

 int main(){
     int arr[10]{9,8,7,6,11,4,3,2,1,5};
     mergeSort(arr,0,9);
     for (int i:arr)
     {
         cout << i << " ";
     }
     return 0;
 }
