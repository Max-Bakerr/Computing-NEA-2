#include <iostream>

int main(){
    // pointers = variable that stores a memory address of another variable 
    //              sometimes makes it easier to work with an address

    // & address-of operator
    // * dereference operator

    std::string name = "Max";
    std::string *pName = &name;

    std::cout << *pName;


    int age = 17;
    int *pAge = &age;
    std::cout << *pName << '\n';

    
    std::string freePizzas[5] = {"pizza1", "pizza2","pizza3","pizza4"};
    std::string *pFreePizzas = freePizzas;
    std::cout << *pFreePizzas;
    

}