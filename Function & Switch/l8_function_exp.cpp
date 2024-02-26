#include<iostream>
using namespace std;
//define 2 main function is not possible
//main function takes only zero or two input parameters
//second input perameter in main should be 'char **' otherwise itwill show a worning
//it will also run with two int parameter but with a worning that use second parameter 'char **'
//in CPP return 0 means the programm is executed successfully and done what is intended to do.
//return 1 0r return something means the program in not executed successfully and there is some error.

int main(int x,char **){
    cout << "main 1" << endl;
    return -1;
}
