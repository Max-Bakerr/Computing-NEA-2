#include <iostream>

int main() {
    // User input in C++ is handled using the standard input stream, which is typically the keyboard.
    // The most common way to read user input is by using the std::cin object.

    int age;
    std::cout << "Enter your age: ";
    std::cin >> age; // Read an integer from user input

    std::string name;
    std::cout << "Enter your name: ";
    std::cin >> name; // Read a string from user input

    std::cout << "Hello, " << name << "! You are " << age << " years old." << std::endl;

    //for taking strings which contain spaces, we can use std::getline:
    std::string fullName;
    std::cout << "Enter your full name: ";
    std::getline(std::cin, fullName); // Read a full line of text including spaces

    

    return 0;
}