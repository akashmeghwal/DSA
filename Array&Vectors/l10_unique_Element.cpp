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
    cout << "Unique elemets are\n";
    for (int i = 0; i < size; i++)
    {
        int unique = 1;
        for (int j=0; j < size; j++)
        {
            if(arr[i]==arr[j]&&i!=j){
                unique = 0;
            }
       }
       // use unique==0 for duplicate elements
       if (unique==1)
       {
            cout << arr[i] << " ";
       }
         
    }
    
    return 0;
        }
