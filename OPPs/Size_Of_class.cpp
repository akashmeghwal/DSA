#include<iostream>
using namespace std;
class Student{
    //empty
};
class Student1{
    int a;
    int b;
    char c;
};
class Student2{
    bool bl;
    int a;
    int b;
    char c;
};
class Student3{
    int a;
    int b;
    char c;
    bool bl;
};
class Student4{
    int b;
    int a;
    double d;
    char c;
    bool bl;
};
class Student5{
    double a;
    int b;
    char c;
    bool bl;
};

int main(){
    cout << sizeof(Student) << endl;
    cout << sizeof(Student1) << endl;
    cout << sizeof(Student2) << endl;
    cout << sizeof(Student3) << endl;
    cout << sizeof(Student4) << endl;
    cout << sizeof(Student5) << endl;
    
}