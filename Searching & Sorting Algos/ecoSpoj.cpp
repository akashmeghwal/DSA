#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool isPossible(vector<long long int>& tree,long long int n,long long int m,long long int mid){
    long long int collectWood = 0;
    for (int i = 0; i < n;i++){
      if(tree[i]>mid){
          collectWood += tree[i]-mid;
      }
    }
    return collectWood >= m;
}
long long int maxHieght(vector<long long int>& tree,long long int n,long long int m){
    long long int s = 0, e = *max_element(tree.begin(),tree.end());
    long long int ans = -1;
    while(s<=e){
        long long int mid = s + (e - s) / 2;
        if(isPossible(tree,n,m,mid)){
            ans = mid;
            s = mid + 1;
        }
        else
            e = mid - 1;
    }
    return ans;
}
int main(){
    vector<long long int> tree;
    long long int n,m;
    cin >> n >>m;

    for (long long int i = 0; i < n;i++){
        long long int key;
        cin>>key;
        tree.push_back(key);
    }
    cout << maxHieght(tree, n, m);
}