#ifndef __FUNC_H_
#define __FUNC_H_
#include <iostream>
#include <sstream>
#include <math.h>

inline void print_(std::string input) {
    for (int i = 0; i < input.size() + 4; i++) {
        std::cout << "*";
    }
    std::cout << std::endl;
    std::cout << "* " << input << " *" << std::endl;
    for (int i = 0; i < input.size() + 4; i++) {
        std::cout << "*";
    }
    std::cout << std::endl;

}

inline unsigned int gcd(unsigned int a, unsigned int b) {
    return (b == 0) ? a : (gcd(b, a % b));
};

inline unsigned int lcm(const unsigned int a, const unsigned int b) {
    return a * (b / gcd(a, b));
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

inline std::ostream& operator<<(std::ostream& out, std::pair<int, int> p) {
    out << p.first << " " << p.second;
    return out;
};

inline unsigned int near_prime(unsigned int n) {
    while (1) {
        if (is_prime(--n)) return n;
        if (n < 2) break;
    }
    return 0;
}

inline unsigned int abundance(unsigned int n) {
    unsigned int sum = 0;
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            sum += i;
            if (n / i != i)
                sum += (n / i);
        }
    }
    return sum - n;
}

#endif
