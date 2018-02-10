#include <iostream>
#include <string>

int main(int argc, char* argv[]){
	int number = 0;
	std::cin >> number;

	std::string inputStr = "";
	for (int i = 0; i < number; ++i){
		std::cin >> inputStr;		
		int length = inputStr.length();

		int zeroCounter = 0;
		int score = 0;
		for (int j = 0; j < length; ++j){
			char* curr_char = &(inputStr[j]);
			if (*curr_char == 'O'){
				zeroCounter++;
				score += zeroCounter;
			} else {
				zeroCounter = 0;		
			}
		}
		std::cout << score << std::endl;

	}
	return 0;
}
