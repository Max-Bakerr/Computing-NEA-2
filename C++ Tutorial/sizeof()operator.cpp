#include <iostream> 

int main(){
    //sizeof() = determines the size in bytes of a:
    //              variable, data type, class, object, etc 
    // can be used to determine the number of elements in an array:

    std::string students[] = {"MB", "QT", "EJ", "PT"};
    std::cout << sizeof(students)/sizeof(std::string) << "elements\n";

    std::string name = "Max";
    double gpa = 2.5;

    std::cout << sizeof(name) << "Bytes\n";

    return 0;
}