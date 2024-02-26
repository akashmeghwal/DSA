#include<iostream>
#include<vector>
using namespace std;
int MissingEle(vector<int> &arr){
    
    int s = 0, e = arr.size() - 1;
    int mid = s + (e - s) / 2;
    while(s<=e){
        if (arr[mid + 1]-arr[mid]==2 && mid + 1 <= arr.size() - 1){
            return arr[mid]+1;
        }
        else if(arr[mid]-mid==1)
            s = mid + 1;
        else
            e = mid - 1;
        mid = s + (e - s) / 2;
    }
    return -1;
} 
int main()
{
    vector<int> arr{1,2,3,5,6,7 ,8,9,10,11};
    cout << MissingEle(arr);
}