
#include <stdio.h>

int main() {
    int M, N;
    scanf("%d %d", &M, &N);


    int max_dominoes = (M * N) / 2;

    printf("%d\n", max_dominoes);

    return 0;
}
