#include <stdio.h>

int main() {
    int size, i;

    printf("Enter array size: ");
    scanf("%d", &size);

    int a[size], b[size], c[size];

    printf("\nEnter array A's elements:\n");
    for (i = 0; i < size; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    printf("\nEnter array B's elements:\n");
    for (i = 0; i < size; i++) {
        printf("b[%d] = ", i);
        scanf("%d", &b[i]);
    }

    for (i = 0; i < size; i++) {
        c[i] = a[i] + b[i];
    }

    printf("\nOutput:\nArray C is: ");
    for (i = 0; i < size; i++) {
        printf("%d", c[i]);
        if (i != size - 1) {
            printf(", ");
        }
    }
    printf("\n");

    return 0;
}
