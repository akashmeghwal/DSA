#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;

int main(){
    int n, m;
    vector<int> ans;
    
    cout << "Enter the size of arr " << endl;
    cin >> n;
    vector<int> arr(n);
    cout << "enter elements for arr \n";
    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the size of brr " << endl;
    cin >> m;
    vector<int> brr(m);
    cout << "enter elements for brr \n";
    for (int i = 0; i < brr.size(); i++)
    {
        cin >> brr[i];
    }
    
    for (int i = 0; i < arr.size(); i++)
    {
        int element = arr[i];
        for (int j = 0; j < brr.size(); j++)
        {
        if (arr[i]==brr[j])
        {
            ans.push_back(arr[i]);
            brr[j] = INT32_MIN;
        }
       } 
    }

    for (int i = 0; i < ans.size(); i++)
    {
       cout << ans[i] << " ";
    }
    
    
}