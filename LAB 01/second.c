#include <stdio.h>
#include <math.h>

int main() {
    long long n, m, a;
    scanf("%lld %lld %lld", &n, &m, &a);


    long long neededFlagstones = ceil((double)n / a) * ceil((double)m / a);

    printf("%lld\n", neededFlagstones);

    return 0;
}

