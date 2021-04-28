#include <iostream>
#include <sstream>

#include <math.h>

#include <functions.h>

#define POWER_3(a)  (a * a * a)

int main(int argc, char** argv) {
    std::string out = "The 3 digits armstrong numbers are:";
    print_(out);
    unsigned int c, d, u;
    for (unsigned int i = 100; i < 1000; i++) {
        u = (i % 10);
        d = (i % 100) / 10;
        c = (i % 1000) / 100;
        if (i == (POWER_3(c) + POWER_3(d) + POWER_3(u))) {
            std::stringstream armstrong;
            armstrong << i;
            print_(armstrong.str());
        }
    }
    return 0;
}
