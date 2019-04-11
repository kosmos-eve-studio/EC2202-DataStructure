//  Created by 김민석 on 2019. 4. 10..
//  Copyright © 2019년 GIST College. All rights reserved.
//

#include <iostream>
#include "Euclid Algorithm.hpp"

int main(){
    std::cout << "Hello, World!" << std::endl;
    std::cout << std::endl;
    
    std::cout << "GCD (150,20): " << get_gcd(150, 20) << std::endl;
    std::cout << "GCD2(150,20): " << get_gcd_2(150, 20) << std::endl;
    std::cout << "GCD_Recursion(150,20): " << get_gcd_recursion(150, 20) << std::endl;
    std::cout << std::endl;
    
    return 0;
}
