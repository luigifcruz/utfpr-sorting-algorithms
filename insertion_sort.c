#include <stdlib.h>
#include <stdio.h>

int arr[] = {2, 6, 1, 6, 3, 2, 0, 5, 6, 7, 8, 9};

void print_arr(int len) {
    for (size_t i = 0; i < len; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    size_t len = sizeof(arr) / sizeof(arr[0]);

    printf("Unsorted:   ");
    print_arr(len);

    int ix = 0;
    for (size_t i = 0; i < len; i++) {
        for (size_t t = i; t < len; t++) {
            if (arr[t] <= arr[ix]) {
                ix = t;
            }
        }
        int tmp = arr[i];
        arr[i] = arr[ix];
        arr[ix] = tmp;
        ix = i + 1;
    }

    printf("Sorted:     ");
    print_arr(len);
    return 0;
}
