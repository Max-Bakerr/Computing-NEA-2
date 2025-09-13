#include <iostream>

//void walk(int steps);
int total = 1;
int factorial(int num);

int main(){
    
    //recursion = a programming technique where a function invokes itself from within
    //              break a complex concept into a repeatable single step

    // iterative vs recursive:

    // advantages = less code and is cleaner
    //              useful for sorting and searching algorithms 

    // disadvantages = uses more memory 
    //                  slower

    //walk(100);
    std::cout << '\n';
    std::cout << '\n';
    std::cout << factorial(14);
    std::cout << '\n';
    std::cout << '\n';
    std::cout << '\n';
    return 0;
}


//iterative:
//void walk(int steps){
//    for(int i = 0; i < steps; i++){
//        std::cout << "You take a step \n";
//    }
//}

//recursive
//void walk(int steps){
//    if(steps > 0){
//        std::cout << "You take a step \n";
//        walk(steps-1);
//    }
//}

int factorial(int num){

    if(num > 0){
        total = total*num;
        factorial(num - 1);
    }
    return total;
}
