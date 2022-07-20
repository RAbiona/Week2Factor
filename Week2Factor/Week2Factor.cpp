// Week2Factor.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    int num;
    bool validInput = false;

    do {

        std::cout << "Please enter a postive number: ";
        std::cin >> num;

        if (std::cin.fail()) {
            validInput = false;
            std::cin.clear();
            std::cin.ignore(99, '\n');
            std::cout << "That is not a number!" << std::endl;
        }
        else {
            if (num <= 0) {
                validInput = false;
                std::cin.clear();
                std::cout << "Number must be positive." << std::endl;

            }
            else {
                validInput = true;
                std::cout << "The factors of given number are: ";

                for (int i = 1; i <= num; i++) {
                    if (num % i == 0) {
                        std::cout << i << " ";
                    }
                }
                std::cout << std::endl;

            }
        }


    } while (!validInput);
}
