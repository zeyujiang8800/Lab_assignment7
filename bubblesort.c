#include <stdio.h>

int bubble_sort (int *array, int num) {
    int temp, count = 0;
    for (int i = 0; i < num; i++) {
        for (int j = 0; j < num-1-i; j++) {
            if (array[j] > array[j+1]) {
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
                count++;
            }
        }
    }
    return count;
}

int main () {
    int array[9] = {97, 16, 45, 63, 13, 22, 7, 58, 72};
    int swaps;
    swaps = bubble_sort(array, 9);
    printf("Number of swaps: %d\n", swaps);
    for (int i = 0; i < 9; i++) {
        printf("%d ", array[i]);
    }
}