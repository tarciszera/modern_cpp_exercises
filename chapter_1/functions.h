#ifndef __FUNC_H_
#define __FUNC_H_
#include <iostream>
#include <sstream>

inline void print_(std::string input) {
    for (int i=0; i < input.size() + 4; i++) {
        std::cout << "*";
    }
    std::cout << std::endl;
    std::cout << "* " << input << " *" << std::endl;
    for (int i=0; i < input.size() + 4; i++) {
        std::cout << "*";
    }
    std::cout << std::endl;

}

inline unsigned int gcd(unsigned int a, unsigned int b) {
    return (b == 0) ? a : (gcd(b, a % b));
};

inline unsigned int lcm(const unsigned int a,const unsigned int b){
    return a * ( b / gcd(a, b));
};

inline bool is_prime(int n) {
    // Corner case
    if (n <= 1)
        return false;

    // Check from 2 to n-1
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
    return true;
}

#endif
