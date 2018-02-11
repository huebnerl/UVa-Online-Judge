#include <iostream>
#include <algorithm>

int main(int argc, char* argv[]){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);

    int number = 0;
    std::cin >> number;
    while (number != 0){
        int v[number];
        for (int i = 0; i < number; ++i){
            std::cin >> v[i];
        }
        std::sort(v, v+number);
        int j = 0;
        while (j < number-1 && v[j+1]-v[j] <= 200){
            j++;
        }
        if (1422 - v[j] <= 100){
            j++;
        }
        if (j == number){
            std::cout << "POSSIBLE" << std::endl;
        } else {
            std::cout << "IMPOSSIBLE" << std::endl;
        }

        std::cin >> number;
    }
    return 0;
}

