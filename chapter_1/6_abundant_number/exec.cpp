#include <iostream>
#include <sstream>

#include <functions.h>


int main(int argc, char** argv) {
    unsigned int in;
    print_("Type a number");
    std::cin >> in;
    for (unsigned int i = 1; i < in; i++) {
        unsigned int j = abundance(i);
        if (j > i) {
            std::stringstream out;
            out << i << " " << j;
            print_(out.str());
        }
    }
    return 0;
}
