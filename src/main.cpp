#include <iostream>

int main()
{   std::string name;
    std:: printf("NOTE: THIS PROGRAM IS CASE SENSITIVE, IT IS REQUIRED THAT YOU ENTER UPPERCASE LETTERS");


    std::cout << " Please enter your name: "<< std::endl;
    std::cin >> name;

    std::cout << ("HI ") << name;std::cout << (" ,Do you feel any of these symptoms? Type YES to confirm, otherwise NO.");

    return 0;
}
