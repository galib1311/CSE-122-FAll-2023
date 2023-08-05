#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);

    int problems_implemented = 0;
    for (int i = 0; i < n; i++) {
        int petya, vasya, tonya;
        scanf("%d %d %d", &petya, &vasya, &tonya);

        // Count the number of friends sure about the solution
        int sure_count = petya + vasya + tonya;

        // Check if at least two of them are sure
        if (sure_count >= 2) {
            problems_implemented++;
        }
    }

    printf("%d\n", problems_implemented);

    return 0;
}

