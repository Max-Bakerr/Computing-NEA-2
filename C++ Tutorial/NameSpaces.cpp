#include <iostream>

namespace first{
    int x = 1;
}

namespace second{
    int x = 2;
}

int main(){
    // Namespace = provides a solution for preventing name conflicts in large projects. 
    // Ench entity needs a unique name. A namespace allows for identically named entities as long as the namespaces are different.

    int x = 0;
    std::cout << x; //if you don't specify a namespace, it will use the global namespace or the local one in the function.

    std::cout << first::x << std::endl; // Accessing the variable x from the first namespace
    std::cout << second::x << std::endl; // Accessing the variable x from the second namespace


    using namespace first; // This allows us to use the first namespace without the prefix
    std::cout << x << std::endl; // Now this will refer to first::x


    //can also use that like this:

    using std::cout; // This allows us to use std::cout without the std:: prefix    

    cout << "MB"; // This will print "MB" without needing std::cout

    return 0;
}