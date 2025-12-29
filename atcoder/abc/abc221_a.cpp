#include <iostream>
#include <cmath>

int main() {
    int a, b;
    std::cin >> a >> b;
    std::cout << (int)std::pow(32, a - b) << std::endl;
    return 0;
}