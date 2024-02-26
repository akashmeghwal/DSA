#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int isPossible(vector<int>&cooksranks,int np,int mid){
    int currP = 0;
    for (int i = 0; i < cooksranks.size();i++){
        int rank = cooksranks[i], j = 1, time = 0;
        while(true){
            if(time+j*rank<=mid){
                currP++;
                time += j * rank;
                j++;
            }
            else
                break;
        }
        if(currP>=np)
            return true;
    }
    return false;
}

int minTimeToCook(vector<int>& cooksRanks,int np){
    int s = 0;
    int e = 0;
    int x = *max_element(cooksRanks.begin(), cooksRanks.end());
    e = x * ( np * (np + 1) / 2);
    int ans = -1;
    while(s<=e){
        int mid = s + (e - s) / 2;
        if(isPossible(cooksRanks,np,mid)){
            ans = mid;
            e = mid - 1;
        }
        else
            s = mid + 1;
    }
    return ans;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int np, nc;
        cin >> np >> nc ;
        vector<int> cooksRanks;
        while(nc--){
            int rank;
            cin >> rank;
            cooksRanks.push_back(rank);
        }
        cout << minTimeToCook(cooksRanks, np) << endl;
    }
    return 0; 
}