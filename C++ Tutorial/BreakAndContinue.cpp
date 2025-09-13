#include <iostream>

int main(){
    //break = break out of a loop
    //continue = skep current iteration

    for(int i = 1; i <= 20; i++){
        if (i ==13){
            continue;
        }
        std::cout << i << "\n";
    }
}
//skips the number 13
