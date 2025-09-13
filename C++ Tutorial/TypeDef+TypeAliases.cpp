#include <iostream>
#include <vector>

typedef std::vector<std::pair<std::string, int>> pairlist_t; // Type alias for a vector of pairs


typedef std::string text_t;

//or 

using number_t = int; // Type alias for int


int main(){
    // Type aliases in C++ are used to create an alternative name for an existing type.
    // This can make code more readable and easier to maintain.

    pairlist_t pairlist;


    text_t firstname = "Max";
    std::cout << firstname << "\n";


    number_t age = 17;
    

}