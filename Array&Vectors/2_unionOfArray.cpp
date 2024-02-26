#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr{1, 2, 6, 4, 5};
    vector<int> brr{1, 2, 3, 4, 4};
    vector<int> ans;
    for (int i = 0; i < arr.size(); i++)
    {
        ans.push_back(arr[i]);
        for (int j = 0; j < brr.size(); j++)
        {
            if (arr[i]==brr[j])
                brr[j] = INT32_MIN;
        } 
    }
    for (int i = 0; i < brr.size(); i++)
    {
        if(brr[i]!=INT32_MIN)
            ans.push_back(brr[i]);
    }
    
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i]<<" ";
    }
    
}