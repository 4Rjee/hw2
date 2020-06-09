# include <iostream>


int 
main(int, char**)
{
    std::string name;
    // getting user's name from stdin
    std::getline(std::cin, name);
    std::cout << "Hello world from " << name 
              << std::endl; 
    return 0;
}
