#include<stdio.h>

int main(){
    int array[10];//ประกาศตัวแปรarrayมีขนาด10ช่อง

    for (int i = 0; i < 10; i++) {//วนลูปรับค่าทั้งหมด10รอบเพื่อเก็บค่าเข้าตัวแปรarray
        scanf("%d", &array[i]);
    }

    for (int i = 0; i < 10; i++) {//วนลูป10รอบเพื่อจะเเสดงค่าออกมา
        if (array[i] % 5 == 0) {//สร้างเงื่อนไขว่าถ้าi/5ลงตัวให้เเสดงค่าออกมา
            printf("%d ", array[i]);
        }
    }
}