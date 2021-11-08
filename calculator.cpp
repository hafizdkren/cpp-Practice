#include <iostream>

    int firstNumber, secondNumber, operationSelect;

    int main() {
        std::cout << "Welcome to my Calculator! Please input first number here:" << std::endl;
        std::cin >> firstNumber;

        std::cout << "Please input second number here:" << std::endl;
        std::cin >> secondNumber;

        std::cout << "Select your operation" << std::endl;
        std::cout << "1. Plus, 2. Minus, 3. Multiply, 4. Divide" << std::endl;
        std::cin >> operationSelect;

/*Trying to using the if else for temporary*/
/*

        if (operationSelect == 1) {
            std::cout << firstNumber + secondNumber << std::endl;
        } else if (operationSelect == 2) {
            std::cout << firstNumber - secondNumber << std::endl;
        } else if (operationSelect == 3) {
            std::cout << firstNumber * secondNumber << std::endl;
        } else if (operationSelect == 4) {
            std::cout << firstNumber / secondNumber << std::endl;
        } else {
            std::cout << "We cannot do other than supplied operation" << std::endl;
        }
*/
/* Switch mode */
        
        switch(operationSelect) {
        case 1:
            std::cout << firstNumber + secondNumber << std::endl;
            break;
        case 2:
            std::cout << firstNumber - secondNumber << std::endl;
            break;
        case 3:
            std::cout << firstNumber * secondNumber << std::endl;
            break;
        case 4:
            std::cout << firstNumber / secondNumber << std::endl;
            break;
        default:
            std::cout << "We cannot do other than supplied operation" << std::endl;
            break;
        }

        return 0;
    }
