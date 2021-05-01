#include <iostream>
#include <sstream>
#include <string>

#include <math.h>
#include <functions.h>

template<typename T>
T min(T const a, T const b) {return (a < b) ? a : b;}

template<typename T, typename... Ta>
T min(T a, Ta... args) { return min(a, min(args...)); }

int main(int argc, char** argv) {
    print_("The minor is:");
    std::stringstream out;
    out << min(5, 2, 54, -2, 1, 2);
    print_(out.str());
    return 0;
}
