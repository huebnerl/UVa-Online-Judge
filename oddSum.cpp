#include <iostream>

int main(int argc, char* argv[]){
	int number = 0;
	std::cin >> number;

	int start = 0;
	int limit = 0;
	int s = 0;
	for (int i = 0; i < number; ++i){
		std::cin >> start;
		std::cin >> limit;
		if (!(start%2)){
			start++;
		}
		if (limit%2){
			limit++;
		}
		s = (((limit*0.5) * (limit+1)) - (((start-1)*0.5) * (start)));
		s -= (((limit+1) - start) / 2);
		s *= 0.5;
		std::cout << "Case " << i+1 << ": " << s << std::endl;
	}
	return 0;
}
