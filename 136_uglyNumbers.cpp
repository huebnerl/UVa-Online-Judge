#include <iostream>

int main(int argc, char* argv[]){
    unsigned int counter = 3;
    unsigned int number = 4;
    bool okey = true;
    while (counter < 1500){
        unsigned int n = number;
        unsigned int z = 2;
        okey = true;
        while (z * z <= n){
            if (n % z == 0){
               if (z != 2 && z != 3 && z != 5){
                  okey = false;
                  break;
               } else {
                  n /= z; 
               }
            } else {
                z++;
            }
        }        
        if (n > 1){
            if (n != 2 && n != 3 && n != 5){
                okey = false;
            }
        }
        if(okey){
            counter++;
            std::cout << number << std::endl;
        }
        number++;
        
    }
    std::cout << "The 1500'th ugly number is " << number-1 << "." << std::endl;
    return 0;
}
