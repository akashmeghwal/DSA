#include<iostream>
#include<vector>
using namespace std;

void doubleArr(int arr[], int index, int size)
{
    if (index >= size)
        return;
    arr[index] = 2 * arr[index];
    doubleArr(arr, index + 1, size);
}
void Max(int arr[], int index, int size, int &maxi)
{
    if (index >= size)
    {
        return;
    }
    if (arr[index] > maxi)
    {
        maxi = arr[index];
    }
    Max(arr, index + 1, size, maxi);
}
int main(){
    int arr[8]{1, 2, 3, 4, 5, 3, 8, 3};
    int maxi = INT16_MIN;
    Max(arr, 0, 8, maxi);
    cout << maxi << endl;
    doubleArr(arr, 0, 8);
    for (int i :arr)
    {
        cout << i<< " ";
    }
}