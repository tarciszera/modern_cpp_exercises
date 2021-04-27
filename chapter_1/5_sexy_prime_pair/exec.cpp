#include <iostream>
#include <sstream>

#include <functions.h>

std::ostream& operator<<(std::ostream& out, std::pair<int, int> p) {
    out << p.first << " " << p.second;
    return out;
};

int main(int argc, char** argv) {
    unsigned int in;
    print_("Type a number");
    std::cin >> in;
    auto sexy_prime_pairs = [=] (unsigned int n) {
        unsigned int p1 = n, p2, p3, p4, p5;
        p2 = near_prime(p1);
        while (n--) {
            p1 = p2;
            p2 = near_prime(p1);
            p3 = near_prime(p2);
            p4 = near_prime(p3);
            p5 = near_prime(p4);
            if (p1 - p2 == 6) {
                std::stringstream out;
                out << p1 << " " << p2;
                print_(out.str());
            } else if (p1 - p3 == 6) {
                std::stringstream out;
                out << p1 << " " << p3;
                print_(out.str());
            } else if (p1 - p4 == 6) {
                std::stringstream out;
                out << p1 << " " << p4;
                print_(out.str());
            } else if (p1 - p5 == 6) {
                std::stringstream out;
                out << p1 << " " << p5;
                print_(out.str());
            }
            if ((p5 < 2)) break;
        }
    };
    sexy_prime_pairs(in);
    return 0;
}
