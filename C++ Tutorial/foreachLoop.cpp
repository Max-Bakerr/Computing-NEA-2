#include <iostream> 

int main(){
    //foreach loop = loop that eases the traversal over an iterable data set 
    //using a standard for loop, you need 3 statements in the for loop
    //foreach loop uses less syntax, but is less flexible 

    std::string students[] = {"Max", "Fred", "James", "Peter"};

    for(std::string student : students){
        std::cout << student << '\n';
    }

    //example 2

    int grades[] = {65,78,67,69,76};

    for(int grade : grades){
        std::cout << grade << '\n';
    }

}