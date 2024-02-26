#include<iostream>
#include<vector>
using namespace std;
int main(){
    // int n;
    // cin >> n;
    //creation
    vector<int>arr;

    //insert
    arr.push_back(1);
    arr.push_back(3);
    arr.push_back(4);
    // int ans = (sizeof(arr) / sizeof(char));
    // cout << ans;
    cout << arr.size()<<" ";
    cout << arr.capacity() << endl;

    //printing
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i]<<" ";
    }
    cout << endl;

    //remove/delete
    arr.pop_back();
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i]<<" ";
    }
    cout << endl;

    //declairation methods
    vector<int> brr(10,101);
    cout << "size and capacity of brr is " << brr.size() << " " << brr.capacity() << endl;
    for (int i = 0; i < brr.size(); i++)
    { 
        cout << brr[i]<<" ";
    }
    cout << endl;

    vector<int> crr{1, 2, 3, 4, 5};
    cout << "size and capacity of crr is " << crr.size() << " " << crr.capacity() << endl;
    for (int i = 0; i < crr.size(); i++)
    {
        cout << crr[i]<<" ";
    }
    cout << endl;
}