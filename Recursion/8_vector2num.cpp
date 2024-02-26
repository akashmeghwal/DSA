#include<iostream>
#include<vector>
using namespace std;

void v2n(vector<int>&arr,int index,int &ans){
    if(index>=arr.size()){
        return;
    }
    ans = ans * 10 + arr[index];
    v2n(arr, index + 1, ans);
}

int main(){
    int ans = 0;
    vector<int> arr{1, 2, 3, 4, 5, 6, 7, 8, 9};
    v2n(arr, 0, ans);
    cout << ans;
}