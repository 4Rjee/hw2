# include <iostream>


int 
main(int, char**)
{
    std::string name;
    // получаем имя пользователя
    std::getline(std::cin, name);
    std::cout << "Hello world from " << name 
              << std::endl; 
    return 0;
}
