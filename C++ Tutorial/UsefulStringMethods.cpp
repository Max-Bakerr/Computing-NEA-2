#include <iostream>

int main(){
    std::string name;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    name.length(); //will give you the length of a string

    if (name.length()>12){
        std::cout << "Your name can't be over 12 characters";
    }
    else{
        std::cout << "Welcome " << name;
    }

    //empty function will return boolean depending on whether or not a string is empty 

    if (name.empty()){
        std::cout << "You didn't enter your name";
    }
    else{
        std::cout << "Hello " << name;
    }

    name.clear();

    std::cout << "Hello" << name;

    name.append("@gmail.com"); //within brackets you can add a string to the end of another string

    std::cout << "Your username is now " << name;

    //you can return a character at a given position within a string using:

    std::cout << name.at(0);

    //we can insert a character at a given position: 
    //name.insert(index, what you want to insert)

    name.insert(0, "@")
    std::cout << name;

    //to find a character in a string:

    std::cout << name.find(' ');

    //to delete a portion of a string:
    
    name.erase(0,3);

}