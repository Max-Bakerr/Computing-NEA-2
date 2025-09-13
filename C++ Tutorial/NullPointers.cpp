#include <iostream>

int main(){

    // Null value = a special value that means something has no value.
    //          When a pointer is holding a null value,
    //          that pointer is not pointing at anything (null pointer)

    //          nullptr = keyword represents a null pointer literal 
    //          null ptrs are helpful when determinging if an address was successfully assigned to a pointer


    int *pointer = nullptr;
    int x = 123;

    pointer = &x;

    // if you dereferenece a null pointer, it can lead to undefined behaviour

    //to check if a pointer is a null pointer:

    if (pointer == nullptr){
        std::cout << "address was not assigned";
    }
    else{
        std::cout << "address was assigned";
    }

}