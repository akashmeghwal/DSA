#include<iostream>
using namespace std;
int main(){
    int arr[3][4]{1,2,3,4,5,5,6,7,8,4,9,0};
    for (int i = 0; i < 4; i++)
    {
        int sum = 0;
        for (int j = 0; j < 3; j++)
        {
    
            sum = sum + arr[j][i];
        }
        cout << endl <<sum;
        cout << endl;
    }
    
}