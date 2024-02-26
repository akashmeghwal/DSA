/*

*
*1*
*121*
*12321*
*121*
*1*
*

*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    //upper
    for (int i = 0; i < n; i++)
    {
        int cnt = 0;
        for (int j = 0; j < 2*i+1; j++)
        {
            
            if (j==0||j==2*i)
            {
                cout << "* ";
            }
            else{
                if (j<=i)
                {
                    cout << ++cnt<<" ";
                }
                else
                    cout << --cnt << " ";
            }
        }
        cout << endl;
    }

    //lower
    for (int i = 0; i < n-1; i++)
    {
        int cnt1 = 0;
        for (int j = 0; j < 2*(n-i)-3; j++)
        {
            if (j==0||j==2*(n-i)-4)
            {
                cout << "* ";
            }
            else{
                if (j<=n-i-2)
                {
                    cout << ++cnt1<<" ";
                }
                else
                    cout << --cnt1 << " ";
            }
        }
        cout << endl;
    }
    
    
}