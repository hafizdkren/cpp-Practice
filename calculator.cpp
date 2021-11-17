#include <iostream>
//#include <GLFW/glfw3.h>
//#include <imgui.h>

    int firstNumber, secondNumber, resultNumber, operationSelect;
	char askContinue;

	void opening() {
		static bool isExecuted = false;
		if (isExecuted)
			return;
		isExecuted = true;

		std::cout << "Welcome to my Calculator! ";
	}

/*
	void windowCreation() {
		glfwInit();
		
		glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
		GLFWwindow* window = glfwCreateWindow(600, 800, "Calculator", NULL, NULL);
		
		ImGui::InputTextWithHint("First number", "eg: 50", 2^256, void firstNumber);
		ImGui::InputTextWithHint("Second number", "eg: 50", 2^256, void secondNumber);

		ImGui::Text(resultNumber);

		glfwDestroyWindow(window);
	}
*/

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
		std::cout << "Y/n" << std::endl;
		std::cin >> askContinue;
		switch (askContinue) {
			case 'Y':
				return main();
				break;
			case 'y':
				return main();
				break;
			case 'N':
				return 0;
			case 'n':
				return 0;
		}

    }
