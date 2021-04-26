#include <iostream>
#include <sstream>

#include <functions.h>

int main(int argc, char** argv) {
    int in[2];
    print_("Type 2 numbers");
    std::cin >> in[0];
    std::cin >> in[1];

    auto gcd = [] (auto& imp, int a, int b) -> int {
        return (b == 0) ? a : (imp(imp, b, a % b));
    };
    std::stringstream out;
    out << "The greatest commom divisor is " << gcd(gcd, in[0], in[1]);
    print_(out.str());
    return 0;
}
