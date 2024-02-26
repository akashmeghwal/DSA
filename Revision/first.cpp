#include<iostream>
using namespace std;
void swapAlt(int arr[],int n){
for (int i = 0; i < n; i+=2)
{
    if(i+1<n)
        swap(arr[i], arr[i + 1]);
}

}
void printArr(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
    cout << arr[i] << " ";
    }
    
}
int main(){
    int odd[5]{1, 2, 3, 4, 5};
    int even[6]{1, 2, 3, 4, 5, 6};
    swapAlt(even, 6);
    printArr(even,6);

}