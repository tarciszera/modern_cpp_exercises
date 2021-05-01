#ifndef _IPV4_H__
#define _IPV4_H__
#include <iostream>
#include <sstream>
#include <array>

class ipv4 {
public:
    // Constructors
    ipv4(void) : _address( { 0 } ){};
    ipv4(const std::string& ip) {
        std::stringstream sip(ip);
        int n1, n2, n3, n4; char d1,d2,d3;
        sip >> n1 >> d1 >> n2 >> d2 >> n3 >> d3 >> n4;
    }
    ipv4(const uint8_t& a,const uint8_t& b,const uint8_t& c, const uint8_t& d) : _address{
        {a, b, c, d}
        } {};
    ipv4(const uint32_t& ip) : _address{ {
            {static_cast<uint8_t>(ip >> 24)},
            {static_cast<uint8_t>(ip >> 16)},
            {static_cast<uint8_t>(ip >> 8)},
            {static_cast<uint8_t>(ip)}
        } } {};
    // Access functions
    std::string to_string(void) {
        std::stringstream out;
        out << *this;
        return out.str();
    }
    uint32_t to_uint32(void) {
        return (
            (_address.at(0) << 24) +
            (_address.at(1) << 16) +
            (_address.at(2) << 8) +
            (_address.at(3))
        );
    }
    // Operators overload
    bool operator<(ipv4& p2) {
        return to_uint32() < p2.to_uint32();
    }
    bool operator<=(ipv4& p2) {
        return !(*this > p2);
    }
    bool operator>(ipv4& p2) {
        return to_uint32() > p2.to_uint32();
    }
    bool operator>=(ipv4& p2) {
        return !(*this < p2);
    }
    bool operator==(ipv4& p2) {
        return (to_uint32() == p2.to_uint32());
    }
    bool operator!=(ipv4& p2) {
        return !(*this == p2);
    }
    ipv4& operator++(){
        *this = ipv4(to_uint32() + 1);
        return *this;
    };
    ipv4& operator++(int){
        ipv4 result(*this);
        ++(*this);
        return *this;
    };
    ipv4& operator--(){
        ipv4 ret((static_cast<uint32_t>(this->to_uint32())) - 1);
        *this = ret;
        return *this;
    };
    ipv4& operator=(const ipv4& ip) {
        _address = ip._address;
        return *this;
    }
    friend std::ostream& operator<<(std::ostream& out, const ipv4 ip) {
        out << static_cast<unsigned int>(ip._address.at(0)) << "."
            << static_cast<unsigned int>(ip._address.at(1)) << "."
            << static_cast<unsigned int>(ip._address.at(2)) << "."
            << static_cast<unsigned int>(ip._address.at(3));
        return out;
    }
    friend std::istream& operator>>(std::istream& in, ipv4& ip) {
        int n1, n2, n3, n4; char d1,d2,d3;
        in >> n1 >> d1 >> n2 >> d2 >> n3 >> d3 >> n4;
        if (d1 == '.' && d2 == '.' && d3 == '.') {
            ip = ipv4(n1, n2, n3, n4);
        }
        return in;
    }
private:
    std::array<uint8_t, 4> _address;
};


#endif // _IPV4_H__
