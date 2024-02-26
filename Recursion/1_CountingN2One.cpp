#include<iostream>
#include<vector>
using namespace std;


int search(int arr[], int index, int size, int key)
{
    int ans = -1;
    if(index>=size){
        return ans;
    }
    if(arr[index]==key){
        return index;
    }
    return search(arr, index + 1, size, key);
}


int main(){
    int arr[8]{1, 2, 3, 4, 5, 3,8,3};

}