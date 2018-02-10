#include <iostream>

int main(int argc, char* argv[]){
	int number = 0;
	std::cin >> number;

	for (int i = 0; i < number; ++i){
		int stops = 0;
		std::cin >> stops;
		stops--;
		int scores[stops];

		int route_start = 0;
		int route_end = 0;
		int route_sum = 0;

		int tmp_start = 0;
		int tmp_end = 0;
		int tmp_sum = 0;
		for (int j = 0; j < stops; ++j){
			int curr_next = 0;
			std::cin >> curr_next;
			tmp_sum += curr_next;
			if (curr_next < 0 || j == stops-1){
				int old_tmp_sum = 0;
				int last_element = 0;
				if(curr_next < 0){
					old_tmp_sum = tmp_sum - curr_next;
				} else {
					old_tmp_sum = tmp_sum;
					last_element = 1;
				}
				if(old_tmp_sum > route_sum
				   || (old_tmp_sum == route_sum
				   && tmp_end+last_element-tmp_start > route_end-route_start)){
					route_start = tmp_start;
					route_end = tmp_end + last_element;
					route_sum = old_tmp_sum;
				} 
				tmp_end++;
				if(tmp_sum < 0){
					tmp_start = tmp_end;
					tmp_sum = 0;
				}
			} else {
				tmp_end++;
			}
		}
		if (route_sum <= 0){
			std::cout << "Route "<< i+1 << " has no nice parts"
			       	<< std::endl;
		} else {
			std::cout << "The nicest part of route "
			    	<< i+1 << " is between stops " << route_start+1
				<< " and " << route_end+1 << std::endl;
		}
			
	}
	return 0;
}
