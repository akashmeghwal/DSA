#include<iostream>
#include<vector>
using namespace std;
int main(){
    cout<<"first method"<<endl;
    vector<vector<int>> arr(5, vector<int>(5, -8));
    for (int i = 0; i < 5; i++)
    {
      for (int j = 0; j < 5; j++)
        {
            cout << arr[i][j]<<" ";
        }
        cout << endl;
    }
    cout << endl;
    cout << "second method" << endl;
    vector<vector<int>> V;

    vector<int> a{1, 2, 3, 4};
    vector<int> b{3, 4, 5, 6, 7, 8};
    vector<int> c{1, 2};

    V.push_back(a);
    V.push_back(b);
    V.push_back(c);

    for (int i = 0; i < V.size(); i++)
    {
      for (int j = 0; j <V[i].size() ; j++)
        {
            cout << V[i][j]<<" ";
            //cin>>V[i][j] to take input
        }
        cout << endl;
    }

    
}