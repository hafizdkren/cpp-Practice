#include <iostream>

    int firstNumber, secondNumber, operationSelect, askContinue;

	void opening() {
		static bool isExecuted = false;
		if (isExecuted)
			return;
		isExecuted = true;

		std::cout << "Welcome to my Calculator! ";
	}

    int main() {
        opening();

		std::cout << "Please input first number here:" << std::endl;
        std::cin >> firstNumber;

        std::cout << "Please input second number here:" << std::endl;
        std::cin >> secondNumber;

        std::cout << "Select your operation" << std::endl;
        std::cout << "(1). Plus, (2). Minus, (3). Multiply, (4). Divide" << std::endl;
        std::cin >> operationSelect;

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

		std::cout << "Did you want to using the calculator again?" << std::endl;
		std::cout << "1/0" << std::endl;
		std::cin >> askContinue;
		switch (askContinue) {
			case 1:
				return main();
				break;
			case 0:
				return 0;
		}

    }
