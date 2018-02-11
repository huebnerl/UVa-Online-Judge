#include <iostream>
#include <vector>

int main(int argc, char* argv[]){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);

    int number = 0;
    while (true){
        std::cin >> number;
        if(!number){
            break;
        }
        std::vector<int> arr(number, 0);     
        bool fits = true;
        for (int i = 0; i < number; ++i){
            int c, p;
            std::cin >> c >> p;
            int pos = i + p;
            if(pos >= 0 && pos < number && arr[pos] == 0){
                arr[pos] = c;
            } else {
                fits = false;
            }
        }
        
        if(fits){
            for (int i = 0; i < number; ++i){
                if (i){
                    std::cout << " ";
                }
                std::cout << arr[i];
            }
            std::cout << std::endl;
        } else {
            std::cout << "-1" << std::endl;
        }

    }
    return 0;
}
