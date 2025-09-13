#include <iostream>
#include <cmath>

int main(){
    double side1;
    std::cout << "Enter length of side 1: ";
    std::cin >> side1;

    double side2;   
    std::cout << "Enter length of side 2: ";
    std::cin >> side2;

    double side3;
    side3 = sqrt(pow(side1, 2)+pow(side2, 2));

    std::cout << "The length of the hypotenuse is: " << side3;

    
}