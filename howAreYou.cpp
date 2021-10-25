#include <iostream>

	std::string userInput;

    int main() {
		std::cout << "Hello, how are you?" << std::endl;
		std::cin >> userInput;
	
		if (userInput == "Fine") {
			std::cout << "Great, I have some news for you.";
			return 0;
		} else if (userInput == "Nah") {
			std::cout << "Oh, sorry if something happened, here some news for you.";
			return 0;
		} else {
			std::cout << "Man, I don't understand what you sayings.";
			return 0;
		}
    }
