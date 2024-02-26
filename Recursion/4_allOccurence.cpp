#include<iostream>
#include<vector>
using namespace std;

vector<int> allOcc(int arr[], vector<int> &ans, int index, int size, int key, bool &isFind)
{
    if (index >= size)
    {
        if (isFind == false)
        {
            ans.push_back(-1);
        }
        return ans;
    }

    if (arr[index] == key)
    {
        isFind = true;
        ans.push_back(index);
    }
    return allOcc(arr, ans, index + 1, size, key, isFind);
}

int main(){
    int arr[8]{1, 2, 3, 4, 5, 3, 8, 3};
    vector<int> ans;
    bool isFind = false;
    ans = allOcc(arr, ans, 0, 8, 2, isFind);
    for (int i : ans)
    {
        cout << i << " ";
    }
}