#include <iostream>

void happyBirthday(std::string name, int age){
    std::cout << "Happy bday to you\n";
    std::cout << "Happy bday to you\n";
    std::cout << "Happy bday to " << name << "\n";
    std::cout << "You are " << age << " years old \n";

}

int main(){
    // function = a reusable block of code 

    std::string name = "Max";
    int age = 17;

    happyBirthday(name, age);
    /*
    for(int i = 1; i <= 10; i++){
        happyBirthday(name);
    }
    */
}