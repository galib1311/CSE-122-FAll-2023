#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);

    char word[101];

    for (int i = 0; i < n; i++) {
        scanf("%s", word);

        int len = strlen(word);

        if (len > 10) {

            printf("%c%d%c\n", word[0], len - 2, word[len - 1]);
        } else {

            printf("%s\n", word);
        }
    }

    return 0;
}
