#include<iostream>
#include<vector>
using namespace std;
void printNo(int n,vector<int>&ans)
{
    if (n == 0)
    {
        
        return;
    }
    int digit = n % 10;
    printNo(n / 10,ans);
    ans.push_back(digit);
}

int main(){
    vector<int>ans;
    int n;
    cin >> n;
    printNo( n,ans);
    for(int i:ans){
        cout << i << " ";
    }
}