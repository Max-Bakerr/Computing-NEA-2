#include <iostream> 

int main(){
    // arithmetic operators = return the result of a specific arithmetic operation


    int students = 20;
    students = students + 1;
    students += 1; // incrementing the value of students by 1
    students++; // another way to increment the value of students by 1

    students = students - 1; // decrementing the value of students by 1
    students -= 1; // decrementing the value of students by 1
    students--; // another way to decrement the value of students by 1

    students = students * 2; // multiplying the value of students by 2
    students *= 2; // another way to multiply the value of students by 2
    
    students = students / 2; // dividing the value of students by 2
    students /= 2; // another way to divide the value of students by 2

    int remainder = students % 2;
    std::cout << remainder;

    //order of arithmetic operations:
    // 1. Parentheses
    // 2. Exponentiation
    // 3. Multiplication and Division (from left to right)
    // 4. Addition and Subtraction (from left to right)

}