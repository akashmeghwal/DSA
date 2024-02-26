#include<iostream>
#include<vector>
using namespace std;
double sqrt(int n, int p)
{
    int s = 0, e = n;
    int mid = 0;
    double ans = 0;
    while (s <= e)
    {
        mid = s + (e - s) / 2;
        if (mid * mid == n)
        {
            return mid;
        }
        if (mid * mid < n)
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
        for (double j = ans; j * j <= n; j += step)
        {
            ans = j;
        }
        step = step / 10;
    }

    return ans;
}

int main()
{
    // vector<int> arr{6,7,8,9,2,3,4,5};
    // cout << pivot(arr);
    int n, p;
    cin >> n;
    cin >> p;
    cout << sqrt(n, p);
}