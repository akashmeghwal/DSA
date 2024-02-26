#include<iostream>
using namespace std;
int main(){
    int x,n,h,f,t,o;
    cout << "Enter an Amount" << endl;
    cin >> x;
    cout << "notes" << endl;
    cin >> n;
    int amt = x;
        h = amt / 100;
        amt = amt - h * 100;
        f = amt / 50;
        amt = amt - f * 50;
        t = amt / 20;
        amt = amt - t * 20;
        o = amt / 1;

       // cout << h << " " << f << " " << t << " " << o << endl;
        switch (n)
        {
        case 100:
            cout << h << endl;
            break;
        case 50:
            cout << f << endl;
            break;
        case 20:
            cout << t << endl;
            break;
        case 1:
            cout << o << endl;
            break;
    default:
            cout << "Invalid No!!" << endl;
            cout << h << " " << f << " " << t << " " << o;
            break;
    }

}