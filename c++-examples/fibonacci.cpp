#include <chrono>
#include <iostream>
#include <string>

int fibonacci(int n) {
    if (n < 2) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main(int argc, char *argv[]) {
    auto start = std::chrono::high_resolution_clock::now();
    int result = fibonacci(std::stoi(argv[1]));
    auto stop = std::chrono::high_resolution_clock::now();
    auto duration =
        std::chrono::duration_cast<std::chrono::milliseconds>(stop - start);
    std::cout << "Fib of  " << argv[1] << " = " << result << " in "
              << duration.count() << " milliseconds" << std::endl;
    return 0;
}
