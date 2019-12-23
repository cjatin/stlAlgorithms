#ifndef JCOMMON_H
#define JCOMMON_H
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

inline std::string boolToString(bool b) {
    return (b ? "True" : "False");
}

template<typename T>
void printVector(const std::vector<T>&v) {
    for(auto &i: v) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
}

#endif
