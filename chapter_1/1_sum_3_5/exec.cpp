#include <iostream>
#include <sstream>

#include <functions.h>

int main(int argc, char** argv) {
    int in;
    print_("Type a number!");
    std::cin >> in;
    auto get_3_5_sum = [=] (int n) {
        int sum = 0;
        for (int i = 3; i <= n; i++)
            if ((i % 3) == 0 || (i % 5) == 0)
                sum+=i;
        return sum;
    };
    std::stringstream out;
    out << "Sum of 3 and 5 divisibles: " << get_3_5_sum(in);
    print_(out.str());

    return 0;
}
