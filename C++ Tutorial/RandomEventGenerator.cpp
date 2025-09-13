#include <iostream>
#include <ctime>

int main(){

    srand(time(0));
    int randNum = (rand() % 5) + 1;

    switch(randNum){
        case 1: std::cout << "You win £1\n";
                break; 
        case 2: std::cout << "You win £10\n";
                break;
        case 3:std::cout << "You win £100\n";
                break;
        case 4:std::cout << "You win £1000\n";
                break;
        case 5:std::cout << "You win £10000\n";
                break;
    }


}