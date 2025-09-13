#include <iostream>
#include <string>

// Overloaded bakePizza function
void bakePizza() {
    std::cout << "Baking a plain pizza!" << std::endl;
}

void bakePizza(const std::string& topping) {
    std::cout << "Baking a pizza with " << topping << "!" << std::endl;
}

void bakePizza(const std::string& topping, int size) {
    std::cout << "Baking a " << size << "-inch pizza with " << topping << "!" << std::endl;
}

int main() {
    bakePizza(); // Calls the no-argument version
    bakePizza("pepperoni"); // Calls the single-argument version
    bakePizza("mushrooms", 12); // Calls the two-argument version

    return 0;
}