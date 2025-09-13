#include <iostream>

int main(){
    // array = a data structure that can hold multiple values 
    //          values are accessed by an index number 
    //          can only contain values of the same data type 
    
    std::string car[] = {"Bently", "Land Rover", "Aston Martin"};
    std::cout << "\n";

    car[0] = "ferrari";
    std::cout << car[0] << "\n";
    std::cout << car[1] << "\n";
    std::cout << car[2] << "\n";

    //to declare an array:
    //you need to set the size of the array as it is a static data type

    std::string cars[3];

    cars[0] = "Bently";
    cars[1] = "Porsche";
    cars[2] = "McQueen";
}