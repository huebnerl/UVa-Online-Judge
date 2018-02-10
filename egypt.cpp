#include <iostream>
#include <cmath>

int main(int argc, char* argv[]){
	int a = -1;
	int b = -1;
	int c = -1;
	
	std::cin >> a >> b >> c;	
	while(a!=0 && b!=0 && c!=0){
		a = std::pow(a, 2);
		b = std::pow(b, 2);
		c = std::pow(c, 2);

		if (b + c == a){
			std::cout << "right" << std::endl;
		} else if (a + c == b){
			std::cout << "right" << std::endl;
		} else if (a + b == c){
			std::cout << "right" << std::endl;
		} else {
			std::cout << "wrong" << std::endl;
		}
		std::cin >> a >> b >> c;	
	}
	
	return 0;
}
