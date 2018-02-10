#include <iostream>

unsigned int reverse(unsigned int input){
	unsigned int num = input;
	unsigned int new_num = 0;
	
	while(num > 0){
		new_num = new_num*10 + (num%10);
		num = num/10;
	}
	return new_num;
}

int main(int argc, char* argv[]){
	unsigned int number = 0;

	std::cin >> number;

	for (unsigned int i = 0; i < number; ++i){
		unsigned int num = 0;
		std::cin >> num;	

		unsigned int pal = num;
		pal += reverse(num);
		unsigned int iter = 1;
		unsigned int rev_pal = reverse(pal);
		while(pal != rev_pal){
			pal += rev_pal;
			iter++;
			rev_pal = reverse(pal);
		}
		std::cout << iter << " " << pal << std::endl;
	}
		
	return 0;
}

