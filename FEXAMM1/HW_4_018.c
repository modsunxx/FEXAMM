#include <stdio.h>

int main() {
    int sum = 0;
    int array[3][3];//ประกาศตัวแปรarrayสองมิติ

    printf("Enter 9 elements for the 3x3 array:\n");
    for (int i = 0; i < 3; i++) {//loopรับค่าarrayสองมิติ
        for (int j = 0; j < 3; j++) {
            scanf("%d", &array[i][j]);
        }
    }

    printf("The 3x3 array is:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {//แสดงค่าอาเรย์2มิติ
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < 3; i++) {//นำค่าแบบprimary digonalมารวมกัน
        sum += array[i][i];
    }

    printf("The sum of the primary diagonal elements is: %d\n", sum);
}