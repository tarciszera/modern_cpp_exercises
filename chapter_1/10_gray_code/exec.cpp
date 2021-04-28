#include <iostream>
#include <sstream>
#include <bitset>
#include <deque>
#include <math.h>

#include <functions.h>

#define BITS 5


int main(int argc, char** argv) {
    print_("Gray code for 5 bits:");
    for (int i = 0; i < (1 << BITS); i++) {
        int n = (i ^ (i >> 1));
        std::bitset<BITS> gray_code(n);
        std::stringstream out;
        out << gray_code;
        print_(out.str());
    }
    return 0;
}
