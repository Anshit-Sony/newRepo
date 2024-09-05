#include <iostream>
#include <cmath>

int main() {
    int n = 5; 
    for (int i = 1; i <= n * 2 - 1; ++i) {
        for (int j = 1; j <= n * 2 - 1; ++j) {
            int dist = std::max(std::abs(i - n), std::abs(j - n));
            std::cout << dist + 1;
        }
        std::cout << '\n';
    }
    return 0;
}
