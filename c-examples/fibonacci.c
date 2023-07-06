#include <stdio.h>
#include <sys/time.h>

int fibonacci(int n) {
    if (n < 2) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main(int argc, char *argv[]) {
    struct timeval begin, end;

    gettimeofday(&begin, 0);

    int result = fibonacci(argv[1]);
    gettimeofday(&end, 0);

    return 0;
}
