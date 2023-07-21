#include <stdio.h>

int main() {
    int n = 7;
    int a[] = {10, 6, 2, 3, 7, 1, 2};
    int i, j, k, operations = 0;

    for (i = 1; i < n; i++) {
        j = i - 1;
        k = a[i];
        while (j >= 0 && a[j] > k) {
            a[j + 1] = a[j];
            j--;
            operations++;
        }
        a[j + 1] = k;
        operations++;
    }

    printf("Minimum number of operations required: %d", operations);

    return 0;
}

