#include <iostream>
#include <sstream>

#include <functions.h>

int main(int argc, char** argv) {
    unsigned int in;
    print_("Type a number");
    std::cin >> in;

    auto near_prime = [=](unsigned int n) {
        bool found = false;
        while (!found) {
            if (is_prime(--n)) found = true;
        }
        return n;
    };
    std::stringstream out;
    out << "The largest nearst prime smaller than input is " << near_prime(in);
    print_(out.str());
    return 0;
}
