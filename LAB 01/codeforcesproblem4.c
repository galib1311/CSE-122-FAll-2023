#include <stdio.h>

int main() {
    long long n, m, a;
    scanf("%lld %lld %lld", &n, &m, &a);

    long long flagstones_needed = ((n + a - 1) / a) * ((m + a - 1) / a);

    printf("%lld\n", flagstones_needed);

    return 0;
}

