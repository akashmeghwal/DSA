#include<iostream>
using namespace std;

int main(){
    int arr[101];
    int size;
    cout << "Enter the size of your array (max 100!)" << endl;
    cin >> size;
    cout << "Enter your array elements\n";
    for (int i = 0; i < size;i++){
        cin >> arr[i];
    }
   //reversing the array
    int i = 0;
    while((size-i)>i){
        swap(arr[i], arr[size-1 - i]);
        i++;
    }

    //printing the array
    cout << "Reversed array\n";
    for (int  i = 0; i < size; i++)
    {
        cout << arr[i]<<" ";
     }
     return 0;
        }
