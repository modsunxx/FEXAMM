#include <stdio.h>

int main() {
    int size;
    printf("Input the size of array: ");
    scanf("%d", &size);
    int array[size];
    printf("Input %d elements in the array:\n", size);

    for (int i = 0; i < size; i++) {
        printf("element - %d: ", i + 1);
        scanf("%d", &array[i]); 
    }

    int min = array[0], second_min = array[0];

    for (int i = 1; i < size; i++) {
        if (array[i] < min) {
            second_min = min;
            min = array[i];
        } else if (array[i] < second_min && array[i] != min) {
            second_min = array[i];
        }
    }

    if (second_min == min) { 
        second_min = array[1];
        for (int i = 0; i < size; i++) {
            if (array[i] != min) {
                second_min = array[i];
                break;
            }
        }
        for (int i = 0; i < size; i++) {
            if (array[i] < second_min && array[i] != min) {
                second_min = array[i];
            }
        }
    }
        printf("The second minimum value in the array is: %d\n", second_min);
}