#include<iostream>
using namespace std;

int found(int arr[],int n,int key){
    int index=-1;
    for (int i = 0; i < 10; i++)
    {
        if(arr[i]==key)
            index = i;
    }
    return index;
}
int main(){
    int key;
    int arr[10]{1, 23, -2, 5, 9, 6, 43, 76, -10, 8};
    cout << "Enter the element" << endl;
    cin >> key;
  
    if(found(arr,10,key)==-1)
        cout << "Element missing!!" << endl;
    else
        cout << "Element is present at index " << found(arr,10,key);
    return 0;
}