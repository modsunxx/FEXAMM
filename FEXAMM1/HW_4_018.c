#include <stdio.h>

int main() {
    int size;
    printf("Input the size of array: ");
    scanf("%d", &size);//รับค่าตัวแปรมาเก็บในตัวแปรsize
    int array[size];//สร้างตัวแปรarrayให้มีขนาดเท่ากับsizeที่รับเข้ามา
    printf("Input %d elements in the array:\n", size);

    for (int i = 0; i < size; i++) {//วนลูปเพื่อที่จะรับค่าเข้ามาเก็บในตัวแปรarray
        printf("element - %d: ", i + 1);
        scanf("%d", &array[i]); 
    }

    int min = array[0], second_min = array[0];//ประกาศตัวแปรน้อยสุดกับน้อยอันดับสองให้เป็น0

    for (int i = 1; i < size; i++) {//วนลูปหาจำนวนน้อยสุด
        if (array[i] < min) {
            second_min = min;
            min = array[i];
        } else if (array[i] < second_min && array[i] != min) {
            second_min = array[i];
        }
    }

    if (second_min == min) { //ถ้าหากรองน้อยสุดเท่ากับน้อยสุดกำหนดค่าให้รองน้อยสุดมีค่าเป็น1
        second_min = array[1];
        for (int i = 0; i < size; i++) {
            if (array[i] != min) {
                second_min = array[i];
                break;
            }
        }
        for (int i = 0; i < size; i++) {//วนลูปหาค่ารองน้อยสุด
            if (array[i] < second_min && array[i] != min) {
                second_min = array[i];
            }
        }
    }
        printf("The second minimum value in the array is: %d\n", second_min);
}