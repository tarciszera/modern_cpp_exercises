#include <iostream>
#include <sstream>

#include <math.h>

#include <functions.h>

int main(int argc, char** argv) {
    unsigned int in;
    for (unsigned int i = 1; i < 1000000; i++) {
        unsigned int j = abundance(i);
        if (i == abundance(j)) {
            std::stringstream out;
            out << i << " " << j << " are amicables";
            print_(out.str());
        }
    }
    return 0;
}
