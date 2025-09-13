#include <iostream> 

int main(){

    //dynamic memory = Memory that is allocated after the program is already compiled and running.
    //      Use the 'new' operator to allocate memory in the heap rather than the stack

    //      Useful when we don't know how much memory will we need.
    //      Makes our programs more flexible, especially when accepting user input

    int *pNum = NULL;

    pNum = new int;

    *pNum = 21;

    std::cout << "address: " << pNum << "\n";
    std::cout << "value: " << *pNum << "\n";

    delete pNum;
    //freeing up the memory at this address, if you don't you may cause a memory leak 
    //whenever you use new operator, also use delete operator

    //to create dynamic array:

    char *pGrades = NULL;
    int size;
    std::cout << "How many grades to enter in? ";
    std::cin >> size;

    pGrades = new char[size];

    for(int i = 0; i < size; i++){
        std::cout << "Enter grade #" << i+1 << ": ";
        std::cin >> pGrades[i];
    }

    for(int i = 0; i < size; i++){
        std::cout << pGrades[i] << " ";
    }

    delete[] pGrades;

}