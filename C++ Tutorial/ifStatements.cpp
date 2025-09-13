#include <iostream>

int main(){
    //if statements = do something when a condition is true 

    int age;
    std::cout << "Enter your age: ";
    std::cin >> age;
    
    if (age >= 18){
            std::cout << "welcome to the site.";
    }
    else if (age < 0){
        std::cout << "You are not born yet";
    }
    else{
        std::cout << "You are not old enough.";
    }
    
}