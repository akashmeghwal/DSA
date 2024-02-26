#include<iostream>
using namespace std;
int main(){
int a=123;
char ch = 'q';
bool b = true;
float f = 1.2;
double d = 1.23;
cout << "size of "<< "int " << a << " is " << (sizeof(a)) << endl;
cout << "size of "<< "char " << ch << " is " << sizeof(ch) << endl;
cout << "size of "<< "bool " << b << " is " << sizeof(b) << endl;
cout << "size of "<< "float " << f << " is " << sizeof(f) << endl;
cout << "size of "<< "double " << d << " is " << sizeof(d) << endl;

}
