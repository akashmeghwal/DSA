#include<iostream>
#include<algorithm>
#include<vector>
// #include<utility>
using namespace std;

pair<int ,int> firstLast(vector<int>&arr,int key){
   int s = 0, e = arr.size();
   int mid;
   int ans1 = -1;
   while (s<=e)
   {
       mid = s + (e - s) / 2;
       if (arr[mid]==key)
       {
           ans1 = mid;
           e = mid - 1;
       }
        else if (arr[mid]<key)
        {
            s = mid + 1;
        }
        else
            e = mid - 1;
       
   }
   int ans2 = ans1;
   while(arr[ans2]==key){
       ans2++;
   }
   if(ans2!=-1){
       ans2--;
   }
   pair<int, int> ans{ans1, ans2};
   return ans;
}

int peak(vector<int>&arr){
    int s = 0, e = arr.size();
    int mid;
    while(s<e){
        mid = s + (e - s) / 2;
      if (arr[mid]<arr[mid+1]){
                s = mid + 1;
        }
        else{
            e = mid;
        }   
    }
    return s;
}

int pivot(vector<int>arr){
int s=0,e=arr.size();
int mid = -1;
while(s<=e){
    mid = s + (e - s) / 2;
    if(arr[mid]>arr[0])
        s = mid + 1;
    else
        e = mid-1;
}
return e;
}

double sqrt(int n,int p){
    int s = 0, e = n;
    int mid = 0;
    double ans = 0;
    while(s<=e){
        mid = s + (e - s) / 2;
        if(mid*mid==n){
            return mid;
        }
        if (mid*mid<n)
        {
            ans = mid;
            s = mid + 1;
        }
        else
            e = mid - 1;
    }
    double step = 0.1;
    for (int i = 0; i < p; i++)
    {
        for (double j = ans; j*j <=n ; j+=step)
        {
            ans = j;
        }
        step = step / 10;
    }
    
    return ans;
}
pair<int,int> bs2D(vector<vector<int>>arr,int key){
    int e = arr.size() * arr[0].size() - 1;
    int s = 0;
    int col = arr[0].size(),mid;
    pair<int, int> ans;
    ans.first = -1;
    ans.second = -1;
    while(s<=e){
     mid = s + (e - s) / 2;
    int rIndex = mid / col;
    int cIndex = mid % col;
    int element = arr[rIndex][cIndex];
    if (element==key)
    {
        ans.first = rIndex;
        ans.second = cIndex;
        return ans;
    }
    else if(element>key){
        e = mid - 1;
    }
    else
        s = mid + 1;
    }
    return ans;
}

int main(){
    int arr[] = {1, 2, 3, 4};
}