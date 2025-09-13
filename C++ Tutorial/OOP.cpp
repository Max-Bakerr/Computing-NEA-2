#include <iostream>

class Human{
    public:
        std::string name;
        std::string occupation;
        int age;

        void eat(){
            std::cout << "this person is eating \n";
        }
        void drink(){
            std::cout << "this person is drinking\n";
        }
        void sleep(){
            std::cout << "this person is sleeping\n";
        }


};

int main(){

    //object = A collection of attributes and methods 
    //          create from class which act as a 'blue-print'

    Human human1;
    human1.name = "Bob";
    human1.occupation = "quant";
    human1.age = 25;

    std::cout << human1.name <<'\n';
    std::cout << human1.occupation << '\n';
    std::cout << human1.age << '\n';

    human1.eat();
    human1.drink();
    human1.sleep();

    

}