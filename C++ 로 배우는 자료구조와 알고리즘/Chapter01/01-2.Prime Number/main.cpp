#include <iostream>
#include "isPrimeNum.h"

int main(int argc, char* argv[]){
    
    int i;
    std::cout << "Insert Number: ";
    std::cin >> i;
    
    std::cout << "O(N) Methoid: " << i << " is";
    isPrimeNum(i)? std::cout << " Prime Number\n" : std::cout << " NOT Prime Number\n";
    std::cout << "O(sqrt(N)) Methoid: " << i << " is";
    isPrimeNum2(i)? std::cout << " Prime Number\n" : std::cout << " NOT Prime Number\n";
    std::cout << std::endl;
    
}
