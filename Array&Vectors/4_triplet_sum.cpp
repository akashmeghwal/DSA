#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr{1,2,4,5,3,7,6,8,9,10,11,12};
    int sum = 12;
    for (int i = 0; i < arr.size(); i++)
    {
        int element = arr[i];
        for (int j = i+1; j < arr.size(); j++)
        {
            int element2 = arr[j];
            for (int k = j + 1; k < arr.size();k++){
                if ((element + element2+arr[k]) == sum)
                {
                    cout << "(" << element << "," << element2 <<","<<arr[k]<< ")" << endl;
                }
            }
        }
        
    }
    
}