#include <stdio.h>

void bubble_sort (int *array, int num) {
    int temp, count;
    for (int i = 0; i < num-1; i++) {
        count = 0;
        for (int j = 0; j < num-1-i; j++) {
            if (array[j] > array[j+1]) {
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
                count++;
            }
        }
        printf("Iteration #%d: %d\n", i+1, count);
    }
}

int main () {
    int array[9] = {97, 16, 45, 63, 13, 22, 7, 58, 72};
    int swaps;
    bubble_sort(array, 9);
    printf("\nThe sorted array: ");
    for (int i = 0; i < 9; i++) {
        printf("%d ", array[i]);
    }
}
