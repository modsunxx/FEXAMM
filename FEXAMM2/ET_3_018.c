#include <stdio.h>

int main() {
    char str[100];//สร้างตัวแปรarray100ช่อง
    int count = 0;//สร้างตัวแปรนับมีค่าเป็น0

    printf("Enter a string: ");
    scanf("%s", str);//รับค่าข้อความ

    for (int i = 0; str[i] != '\0'; i++) {//วนลูปตามจำนวนตัวอักษรที่รับเข้ามาแล้วเพิ่มตัวแปรcount
        count++;
    }

    printf("Number of characters: %d\n", count);

    return 0;
}