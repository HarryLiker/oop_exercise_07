#pragma once

#include <iostream>

class Figure {
public:
    virtual void Print(std::ostream &output) = 0;
    virtual void Write(FILE *file) = 0;
    virtual ~Figure() = default;
};
/*
template<class T1, class T2>
inline std::ostream &operator<< (std::ostream &out, const std::pair<T1,T2> &pair) {
    out << "(" << pair.first << ", " << pair.second << ")";
    return out;
}
*/
