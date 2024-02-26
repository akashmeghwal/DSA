#include<iostream>
using namespace std;

int division(int n,int x){
    int ans = 0;
    int s = 0, e = abs(n);
    int mid = s + (e - s) / 2;
    while(s<=e){
        if(mid*x==n)
            return mid;
        else if(mid*x<n){
            ans = mid;
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int main(){
int no, divi,precision;
cout << "Enter the no " << endl;
cin >> no;
cout << "Enter divisor " << endl;
cin >> divi;
cout << "Enter precision " << endl;
cin >> precision;

double ans = division(abs(no), abs(divi));
//precision
double step = 0.1;
double finalAns = ans;
for (int i = 0; i < precision;i++){
        for (double j = ans; j * abs(divi) <= abs(no);j+=step)
        {
            finalAns =j;
        }
        step = step / 10;
}
//retuning answer
        if (divi == 0)
            cout << "Not defined !!" << endl;
        else
        {
            if ((no > 0 && divi > 0) || (no < 0 && divi < 0))
                cout << finalAns;
            else
                cout << -finalAns;
        }

}