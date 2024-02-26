#include<iostream>
#include<vector>
using namespace std;

int main(){
    int a = 5;
    char ch = 'a';
    float f = 1.0;
    double d = 1.00; // declaring a variable

    // int* ptr;  it is bad practise
    //good practices are
    int *ptr = 0;
    // int* ptr=NULL;
    // int *ptr=nullptr;

    //initialization
    ptr = &a;  // assinging the address of a to ptr
    // int *ptr=&a;
    int e = 10;
    //types
    int *p = &e;
    char *c = &ch;
    float *fp = &f;
    double *dp = &d;

    // size()--> 8 bytes or 4 byte architecture dependent;

    cout << sizeof(p) << endl;
    cout << sizeof(c) << endl;
    cout << sizeof(fp) << endl;
    cout << sizeof(dp) << endl;

   //coping a pointer
    cout << ptr << endl;
    ptr=p;
    cout << ptr << endl
         << endl;

    cout << ptr << endl;
    cout << &ptr << endl;
    cout << *ptr << endl;
    cout << a << endl;
    cout << &a<< endl;

}