#include<iostream>
#include<vector>

using namespace std;
int search(vector<int>& arr,int x){
    int s = 0,e=arr.size()-1;
    int mid = s + (e - s) / 2;
    while(s<=e){
        if(arr[mid]==x)
            return mid;
        if(arr[mid-1]==x && mid-1>=0)
            return mid - 1;
        if(arr[mid+1]==x && mid+1<arr.size())
            return mid + 1;
        if(arr[mid]>x)
            e = mid - 2;
        else
            s = mid + 2;
        return -1;
    }
}
int main(){
    vector<int> arr{10, 3, 40, 20, 50, 80, 70};
    int target = 20;
    if(search(arr,target)==-1)
    cout<<"key Not Found!!"<<endl;
    else
    cout << "Key found at Index " << search(arr, target);
    return 0;
}