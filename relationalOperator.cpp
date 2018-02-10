#include <iostream>

int main(int argc, char* argv[]){
	int number = 0;
	std::cin >> number;
	
	int zahl1 = 0;
	int zahl2 = 0;
	for (int i = 0; i < number; ++i){
		std::cin >> zahl1 >> zahl2;
		if (zahl1 > zahl2){
			std::cout << ">" << std::endl;
		} else if (zahl1 == zahl2){
			std::cout << "=" << std::endl;
		} else {
			std::cout << "<" << std::endl;
		}
	}
	return 0;
}
