#include <stdio.h>

int main() {
    int i;

    for (i = 0; i < 8; i++) {
        printf("%d ", i % 2);
    }

    printf("\n");

    return 0;
}


