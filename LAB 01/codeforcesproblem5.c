#include <stdio.h>
int main() {
    int n, k;
    scanf("%d %d", &n, &k);

    int scores[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &scores[i]);
    }

    int advancing_count = 0;
    for (int i = 0; i < n; i++) {
        if (scores[i] >= scores[k - 1] && scores[i] > 0) {
            advancing_count++;
        }
        else {
            break;
        }
    }

    printf("%d\n", advancing_count);

    return 0;
}
