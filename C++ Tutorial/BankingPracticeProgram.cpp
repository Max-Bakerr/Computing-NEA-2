#include <iostream>

int balance = 0;

void addMoney(int amount){
    balance += amount;
}
void removeMoney(int amount){
    balance -= amount;
}
void showBalance(){
    std::cout << "You have £" << balance;
}

int main(){


}