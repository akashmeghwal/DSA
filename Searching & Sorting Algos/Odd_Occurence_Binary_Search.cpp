//problem  by love babbar
#include<iostream>
#include<vector>
using namespace std;
int search(vector<int>&arr){
    int s = 0, e = arr.size()-1;
    int mid = s + (e - s) / 2;
    int ans = 0;
    while(s<=e){
        if(s==e)
            return s;
        if(mid%2==0){
            if(arr[mid]==arr[mid+1]){
                s = mid + 2;
            }
            else{
                e = mid;
            }
        }
        else{
            if(arr[mid]==arr[mid-1]){
                s = mid + 1;
            }
            else{
                e = mid - 1;
            }
        }
        mid = s + (e - s) / 2;
    }
    return -1;
}

int main(){
    vector<int> arr{ 1, 2, 2, 3, 3, 4, 4, 5,5, 4, 4, 7, 7, 2, 2, 100, 100};
    int index = search(arr);
    cout << "Element is found at index " << index << endl;
    cout << arr[index];
    ;
}