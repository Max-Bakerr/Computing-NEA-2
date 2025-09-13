#include <iostream>

int main(){
    // type conversion = converting a value from one type to another.
    //          Implicit = automatic 
    //          Explicit = precede value with new data type (int)

    //Implicit conversion:
    int x = 3.14;
    std::cout << x;

    //Explicit:
    double x = (int) 3.14;
    std::cout << x;
    
    //Another explicit example:
    std::cout << (char) 100;
    //returns 'd' because 100 is the ASCII value for 'd'


    int correct = 8;
    int questions = 10;
    double score = correct / (double) questions * 100;
    

}