#include <iostream>
#include <sstream>
#include <string>
#include <vector>

#include <math.h>
#include <ipv4.h>
#include <functions.h>

template <typename Tp, size_t row, size_t col>
class array2d {
    std::vector<Tp> _arr;
public:
    typedef Tp                  value_type;
    typedef value_type* iterator;
    typedef value_type const* const_iterator;
    array2d() : _arr(row* col) {}
    explicit array2d(std::initializer_list<Tp> l) : _arr(l) {}
    constexpr Tp* data() noexcept { return _arr.data(); }
    constexpr Tp const* data() const noexcept { return _arr.data(); }
    constexpr Tp at(size_t i, size_t j) {
        return _arr.at(i * col + j);
    }
    constexpr Tp const at(size_t i, size_t j) const {
        return _arr.at(i * col + j);
    }
    constexpr Tp& operator()(size_t i, size_t j) {
        return _arr[i * col + j];
    }
    constexpr size_t size(const int dim) {
        if (dim == 0) return row;
        else if (dim == 1) return col;
        else return row * col;
    }
    void fill(const Tp value) {
        std::fill(_arr.begin(), _arr.end(), value);
    }
    void swap(array2d& ar2) noexcept {
        _arr.swap(ar2._arr);
    }
    const_iterator begin() const { return _arr.data(); }
    const_iterator end() const { return _arr.data() + _arr.size(); }
    iterator begin() { return std::begin(_arr); }
    iterator end() { return std::end(_arr); }
};

int main(int argc, char** argv) {
    array2d<ipv4, 2, 2> ips {12313, 654654, 52, 543};
    print_("Type 2 ipv4");
    std::cin >> ips(0, 0) >> ips(1, 0);
    print_(ips(0, 0).to_string());
    print_(ips(0, 1).to_string());
    print_(ips(1, 0).to_string());
    print_(ips(1, 1).to_string());
    return 0;
}
