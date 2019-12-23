// Author Jatin
// for_each - applies lambda or func to each element of the container
// for_each_n - same as for_each for first n elements

#include "common.h"

int main() {
    std::vector<int> v = {3, 6, 9, 12, 15};

    std::cout << "Vector is:: ";
    printVector<int>(v);

    std::cout << "Calling for each to double\n";
    std::for_each(v.begin(), v.end(), [](int& a) { a *= 2; });

    std::cout << "Vector is:: ";
    printVector<int>(v);

    // Not in lib c++ yet
    /*
    std::cout << "Calling for_each_n for first 3  to half\n";
    std::for_each_n(v.begin(), 3, [](int& a) { a /= 2; });

    std::cout << "Vector is:: ";
    printVector<int>(v);
    */
}
