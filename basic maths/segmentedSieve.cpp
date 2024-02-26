#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

vector<bool> sieve(int n){
    vector < bool>norSieve(n+1, true);
    norSieve[0] = norSieve[1] = false;
    for (int i = 2; i * i <= n;i++){
    if(norSieve[i]){
        int j = i * i;
        while(j<=n){
            norSieve[j] = false;
            j += i;
        }
    }
    }
    return norSieve;
}

vector<bool> segSieve(int l, int r){
    vector<bool> prime = sieve(sqrt(r));
    vector<int> baseprime;
    for (int i = 0; i < prime.size();i++){
        if(prime[i]){
        baseprime.push_back(i);
        }
    }
    vector<bool> segS(r-l+1,true);
    if(l==0||l==1){
        segS[0] = false;
    }
    for (auto pi:baseprime){
        int first_mul = (l / pi) * pi;
        if(first_mul<l){
        first_mul += pi;
        }
        int j = max(first_mul, pi * pi);
        while(j<=r){
        segS[j - l] = false;
        j += pi;
        }
    }
    return segS;
}

int main(){
    int l=110, r=130;
    // cout << "enter the range " <<endl;
    // cin >> l >> r;
    vector<bool> ss;
    ss=segSieve(l,r);
    int ans = 0;
    for (int i = 0; i <= (r - l);i++){
     if(ss[i]){
        ans++;
        cout << i + l << " ";
     }
    }
    cout << endl<<ans;
}