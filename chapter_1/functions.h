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

#endif
