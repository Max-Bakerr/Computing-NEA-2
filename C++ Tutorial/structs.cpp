#include <iostream>

struct student{
    std::string name;
    double gpa;
    bool enrolled = true;       //can set a default value 
};

int main(){

    //struct = a structure that group related variables under one name 
    //          structs may contain many different data types 
    //          variables in a struct are known as 'members' 
    //          members can be accessed with . "Class Member Access Operator"


    student student1;
    student1.name = "Roman";
    student1.gpa = 3.2;
    student1.enrolled = true;

    std::cout << student1.name << '\n';

    student student2;
    student2.name = "John";
    student2.gpa = 4.0;


    std::cout << student2.enrolled << '\n';

    student student3;
    student3.name = "Mark";
    student3.gpa = 1.4;
    student3.enrolled = false;

    std::cout << student3.gpa << '\n';


    return 0;
}