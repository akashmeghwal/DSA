#include<iostream>
#include<vector>
using namespace std;

int bs(vector<int>&arr,int s,int e,int k){
   int mid=s+(e-s)/2;
   while(s<=e){
    if(arr[mid]==k)
        return mid;
    else if(arr[mid]<k)
    s=mid+1;
    else
    e = mid - 1;
    mid = s + (e - s) / 2;
   }
   return -1;
}

int main(){
    vector<int> arr{3, 4, 5, 6, 7, 11, 13, 14, 15, 56, 57, 59, 60, 70, 75, 80, 81, 82, 84, 87, 89, 90, 91};
    int key;
    cout << "Enter the key to search " << endl;
    cin >> key;
    if(key==arr[0])
    cout<<"0";
    int i = 1;
    while (arr[i] <= key && i < arr.size())
    {
    i = i * 2;
    }
    int n = arr.size();
    cout << i << endl;
    int e = min(i, n - 1);
    cout<< bs(arr, i / 2, e, key);
    return 0;
}