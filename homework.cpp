#include <iostream>  // std::cin, std::cout, std::getline
#include <string>    // std::string

int main()
{
    // Complete the homework problems here
    
    // Problem 1
    int x;
     std::cout << "Enter a number from 1-100" << std::endl;
        std::cin >> x;
    while (x < 1 || x > 100)
    {
        std::cout << "Invalid number. Enter another." << std::endl << std::endl;
        std::cout << "Enter a number from 1-100" << std::endl;
        std::cin >> x;
    }
    std::cout << "Valid input! Your number is: " << x << std::endl << std::endl;

    // Problem 2
    std::string color;
    int tries = 1;
    std::cout << "Guess my favorite color." << std::endl;
    std::cin >> color; 
    while (color != "blue")
    {
        std::cout << "wrong! " << color << " is not my favorite color. Try again." << std::endl << std::endl;
        tries = tries + 1;
        std::cout << "Guess my favorite color." << std::endl;
        std::cin >> color; 
    }
    std::cout << "correct! blue is the best color. You took " << tries << " tries." << std::endl << std::endl;
    
    // Problem 3
    int sum = 0;
    int desired_amount;
    int tracker = 0;
    int inputted_number;
    std::cout << "How much numbers do you want to add?" << std::endl;
    std::cin >> desired_amount;
    std::cout << "One by one, type the " << desired_amount << " numbers you want to add." << std::endl;
    while (tracker != desired_amount)
    {
        std::cin >> inputted_number;
        sum = sum + inputted_number;
        tracker = tracker + 1;
    }
    std::cout << "the sum of all your added numbers is: " << sum << std::endl << std::endl;
    
    
    return 0;
}
