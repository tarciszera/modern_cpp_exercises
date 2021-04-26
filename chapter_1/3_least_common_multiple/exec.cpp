#include <iostream>
#include <sstream>

#include <functions.h>

int main(int argc, char** argv) {
    int in[2];
    print_("Type 2 numbers");
    std::cin >> in[0];
    std::cin >> in[1];

    auto lcm = [=] (const unsigned int a,const unsigned int b) -> unsigned int {
        return a * ( b / gcd(a, b));
    };

    std::stringstream out;
    out << "The least commom multiple is " << lcm(in[0], in[1]);
    print_(out.str());
    return 0;
}
