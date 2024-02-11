#include <stdio.h>
#include <time.h>
#include <math.h>
#include <stdbool.h>

#define uint unsigned

long long get_time() {
    struct timespec ts;
    clock_gettime(CLOCK_REALTIME, &ts);
    return ts.tv_sec * 1000000000LL + ts.tv_nsec;
}

bool is_prime(uint num) {
    for (uint i = floor(sqrt(num)); i >= 2; i--) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    long long start_time = get_time();

    uint count = 0;
    uint num = 2;

    while (true) {
        if (is_prime(num)) count++;
        num++;
        if (count == 100000) {
            printf("gecen zaman: %f saniye", (double) (get_time() - start_time) / 1e9);
            return 0;
        }
    }
}
