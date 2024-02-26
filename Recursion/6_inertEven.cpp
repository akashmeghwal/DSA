#include<iostream>
#include<vector>
using namespace std;

void insertion(int arr[], int index, int size, vector<int> &ans)
{
    if (index >= size)
        return;
    if (arr[index] % 2 == 0)
    {
        ans.push_back(arr[index]);
    }
    insertion(arr, index + 1, size, ans);
}

int main(){
    int arr[8]{1, 2, 3, 4, 5, 6, 7, 8};
    vector<int> ans;
    insertion(arr, 0, 8, ans); 
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    
}