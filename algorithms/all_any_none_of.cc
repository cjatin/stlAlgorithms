// Author Jatin
// std::all_of, std::any_of, std::none_of - checks if the given predicate is true for all any or
// none of the elements in the container.

#include "common.h"

int main() {
    std::vector<int> v = {3, 6, 9, 12, 15};

    std::cout << "Vector is:: ";
    printVector<int>(v);
    std::cout << "Are all divisible by 3 :: "
              << boolToString(std::all_of(v.begin(), v.end(), [](int a) { return a % 3 == 0; }))
              << std::endl;

    std::cout << "Are any divisible by 2 :: "
              << boolToString(std::any_of(v.begin(), v.end(), [](int a) { return a % 2 == 0; }))
              << std::endl;

    std::cout << "Are none divisible by 5 :: "
              << boolToString(std::none_of(v.begin(), v.end(), [](int a) { return a % 5 == 0; }))
              << std::endl;
}
