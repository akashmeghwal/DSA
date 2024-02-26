#include<iostream>
using namespace std;

int main(){
int arr1[5]{1,2,3,4,5};
cout << "First" << endl;
for (int i = 0; i < 5; i++)
{
    cout << arr1[i] << " ";
}

cout << "\nSecond" << endl;
int arr2[5]{0};

for (int i = 0; i < 5; i++)
{
    cout << arr2[i] << " ";
}

cout << "\nthird" << endl;
int arr3[5]{1};

for (int i = 0; i < 5; i++)
{
    cout << arr3[i] << " ";
}

cout << "\nforth" << endl;
int arr4[5];
fill_n(arr4, 5, 23);
for (int i = 0; i < 5; i++)
{
    cout << arr4[i] << " ";
}
cout << "\nFifth" << endl;
int arr5[5]{1,2};
for (int i = 0; i < 5; i++)
{
    cout << arr5[i] << " ";
}
return 0;
}