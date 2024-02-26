#include<iostream>
using namespace std;
int main(){
    int arr[10]{1, 2, 3, 4, 5, 6, 7, 12, 34, 45};
    int key;
    cin >> key;
    int ans=-1;
    int s = 0, e = 9;
    int mid =s + (e-s) / 2;
    //mid=(s+e)/2
    while (s<=e)
    {
       if(arr[mid]==key){
            ans = mid;
        } 
        if(key<arr[mid]){
        e = mid-1;
          
        }   
        else{
            s = mid+1 ;
        }
        mid = s + (e-s) / 2;
    }
    cout << ans;
}