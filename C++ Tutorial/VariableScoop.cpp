#include <iostream>

int myNum = 3;
// this is a global variable


void printNum(){
    int myNum = 2;
    std::cout << myNum;

}


int main(){
    //local variables = declared inside a function or block {}
    //global variables = declared outside of all functions 

    int myNum = 1;
    printNum();
    std::cout << ::myNum << '\n';
    // two colons = scoop resolution operator
    // local variables will also be used first 



}