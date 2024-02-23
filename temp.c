#include <stdio.h>

int main() {
    int i, j, limit, value[100], temp;

    printf("Enter the limit: ");
    scanf("%d", &limit);

    printf("Enter the values: ");
    for (i = 0; i < limit; i++) {
        scanf("%d", &value[i]);
    }

    for (i = 0; i < limit - 1; i++) {
        for (j = i + 1; j < limit; j++) {
            if (value[i] > value[j]) {
                temp = value[i];
                value[i] = value[j];
                value[j] = temp;
            }
        }
    }

    printf("Sorted array: ");
    for (i = 0; i < limit; i++) {
        printf("%d ", value[i]);
    }

    return 0;
}
