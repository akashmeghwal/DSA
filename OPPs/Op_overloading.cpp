#include <iostream>
using namespace std;
class Complex{
    public:
        int r, i;
    //ctor-default
    Complex(int r,int i):r(r),i(i){}
    //unary "-"operator overloading
    Complex operator-() const {
        Complex result(0,0);
        result.r = -r;
        result.i = -i;
        return result;
    }
    //binary "+"operator overloading
    Complex operator+(const Complex& src){
        Complex result(0,0);
        result.r = r+src.r;
        result.i = i+src.i;
        return result;
    }

    void print(){
        cout <<"R: "<< this->r<<"  "<<"I: "<<this->i;
    }

};

int main(){
    Complex c(1, 2);
    Complex b(3, 4);
    Complex r(0, 0);
    r = -c;
    r.print();
    r = c + b;
    cout << endl;
    r.print();
}