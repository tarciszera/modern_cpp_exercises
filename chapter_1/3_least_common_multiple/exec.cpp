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
    auto lcm = [=] (const int a,const int b) {
        auto h = gcd(gcd, a, b);
        return (a * ( b / h));
    };

    std::stringstream out;
    out << "The least commom multiple is " << lcm(in[0], in[1]);
    print_(out.str());
    return 0;
}
