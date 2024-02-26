#include<iostream>
using namespace std;

int main(){
    int arr[10]{1, 2, 3, 4, 5, 6, 7, 8, 9, 11};

    cout << arr[0] << endl;
    cout << endl;
    cout << &arr[0] << endl;
    cout << arr << endl;
    cout << &arr << endl;
    cout << endl;

    cout << *arr << endl; //value at index 0
    cout << arr + 1 << endl;//adress of index 1
    cout << *(arr + 1 )<< endl;//value at index 1
    cout << *arr + 10 << endl; //(value at index 0) + 10

    cout << endl<<endl;
    for (int i = 0; i < 10;i++){
        cout << *(arr + i) << " ";
    }
    cout << endl<<endl;
    for (int i = 0; i < 10;i++){
        cout << arr[i] << " ";
    }
    cout << endl<<endl;
    for (int i = 0; i < 10;i++){
        cout << *(i+arr) << " ";
    }
    cout << endl<<endl;
    for (int i = 0; i < 10;i++){
        cout << i[arr] << " ";
    }
}