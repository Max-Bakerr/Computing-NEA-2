#include <iostream> 

//don't need to explicitly assign values, will automattically do 0-whatever
enum Day {sunday = 1, monday = 2, tuesday = 3, wednesday = 4, thursday = 5, friday = 6, saturday = 7};

int main(){

    // enums = a user-defined data type that consists of paired named-integer constants
    //          great if you have a set of potential options 


    Day today = sunday; 

    //normally you cannot use strings in switches 

    /*switch(today){
        case "sunday": std::cout << "It is Sunday. \n";
                        break;
        case "monday": std::cout << "It is Monday. \n";
                        break;
        case "tuesday": std::cout << "It is Tuesday. \n";
                        break;
        case "wednesday": std::cout << "It is Wednesday. \n";
                        break;
        case "thursday": std::cout << "It is Thursday. \n";
                        break;
        case "friday": std::cout << "It is Friday. \n";
                        break;
        case "saturday": std::cout << "It is Saturday. \n";
                        break;
    }
    */

    //but if you use enums:

    switch(today){
        case sunday: std::cout << "It is Sunday. \n";
                        break;
        case monday: std::cout << "It is Monday. \n";
                        break;
        case tuesday: std::cout << "It is Tuesday. \n";
                        break;
        case wednesday: std::cout << "It is Wednesday. \n";
                        break;
        case thursday: std::cout << "It is Thursday. \n";
                        break;
        case friday: std::cout << "It is Friday. \n";
                        break;
        case saturday: std::cout << "It is Saturday. \n";
                        break;
    }

}