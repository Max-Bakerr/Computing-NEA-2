#include <iostream>
#include <ctime>

int main(){

    srand(time(NULL));
    int num = (rand()%10) + 1;
    int guess;
    bool loop = true;

    std::cout << "========= Number Guessing Game =========\n";

    while(loop) {
        std::cout << "Enter your guess: ";
        std::cin >> guess; 

        if (guess > num){
            std::cout << "Your guess is too large \n";
        }
        else if (guess < num){
            std::cout << "Your guess is too low \n";
        }
        else if (guess == num){
            std::cout << "Correct!!\n";
            break; 
        }
    }
    
    std::cout << "========================================\n";



}