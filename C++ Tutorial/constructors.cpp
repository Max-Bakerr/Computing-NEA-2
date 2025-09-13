#include <iostream>

class student{
    public:
        std::string name;
        int age;
        double gpa;

    student(std::string name, int age, double gpa){
        this->name = name;
        this->age = age;
        this->gpa = gpa;
    }

/* if not using the same name parameters:
student(std::string x, int y, double x){
    name = x;
    age = y;
    gpa = z;
}
*/
};



int main(){

    // constructor = special method that is automatically called when an object is instantiated
    //               useful for assigning values to attributes as arguements 


    student student1("Mark",17,4.5);

    std::cout << student1.name << "\n"; 
    std::cout << student1.age << "\n"; 
    std::cout << student1.gpa << "\n"; 

}