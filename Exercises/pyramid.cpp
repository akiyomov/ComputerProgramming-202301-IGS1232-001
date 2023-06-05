#include <iostream>

int main() {
    int length;

    std::cout << "Enter the length of the bottom line: ";
    std::cin >> length;
    int height = length /2 +1;
    for(int i = 0; i< height; ++i){
        for(int j = 0; j < height - 1 - i;++j){
            std::cout << " ";
        }
        for(int j = 0; j< 2*i+ 1;j++){
            std::cout << "*";
        }
        std::cout << std::endl;
    }
}
