// Author Jatin
// count - count the value in container
// count_if - count value satisfying function in container

#include "common.h"

int main() {
    std::vector<int> v = {1, 3, 1, 2, 3, 1, 3, 5, 5};

    std::cout << "Printing Vector:: ";
    printVector<int>(v);

    auto c3 = std::count(v.begin(), v.end(), 3);
    std::cout << "Count of 3 in vector:: " << c3 << std::endl;

    auto c5 = std::count_if(v.begin(), v.end(), [](int& a) { return a % 5 == 0; });
    std::cout << "Count number of elements div by 5:: " << c5 << std::endl;
}
