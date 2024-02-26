/*hollow rectangle
* * * * *
*       *
* * * * *
*/
#include<iostream>
using namespace std;
int main(){
    int raw, col;
    cin >> raw >> col;
    for (int i = 0; i < raw; i++)
    {   
        if(i==0||i==raw-1){
        for (int j = 0; j < col; j++)
        {
            cout << "*";
        }
        }
        else{
        cout << "*";
        for (int j = 1; j < col-1; j++)
        {
            cout << " ";
        }
        cout << "*";
        }
        cout << endl;
    }
    
}