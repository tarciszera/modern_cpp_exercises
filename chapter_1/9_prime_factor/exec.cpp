#include <iostream>
#include <sstream>

#include <math.h>

#include <functions.h>

int main(int argc, char** argv) {
    unsigned int in, n;
    print_("Type a number:");
    std::cin >> in;
    n = in;
    std::stringstream out;
    for (int i = 2; i < n; i++) {
        while ((in % i) == 0) {
            out << i << " ";
            in = in / i;
        }
        if (in == 1) break;
    }
    print_(out.str());
    return 0;
}
