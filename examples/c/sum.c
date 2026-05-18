#include <stdio.h>

int sum_array(int values[], int count) {
    int total = 0;

    for (int i = 0; i < count; i++) {
        total = total + values[i];
    }

    return total;
}

int main(void) {
    int values[] = {2, 4, 6, 8, 10};
    int count = 5;
    int total = sum_array(values, count);

    printf("total = %d\n", total);
    return 0;
}
