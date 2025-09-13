#include <iostream>
#include <cmath>

int main(){
    double x = 3;
    double y = 4;
    double z;

    z = std::max(x, y); // Using std::max to find the maximum of x and y
    std::cout << "The maximum value is: " << z << std::endl;

    z = std::min(x, y); // Using std::min to find the minimum of x and y
    std::cout << "The minimum value is: " << z << std::endl;

    z = pow(2, 3); // Using pow to calculate 2 raised to the power of 3

    z = sqrt(16); // Using sqrt to calculate the square root of 16

    z = abs(-5); // Using abs to get the absolute value of -5

    z = round(x); // Using round to round x to the nearest integer

    z = ceil(x); // Using ceil to round x up to the nearest integer

    z = floor(x); // Using floor to round x down to the nearest integer

    // url for c++ maths funtions: https://www.cplusplus.com/reference/cmath/
    

}