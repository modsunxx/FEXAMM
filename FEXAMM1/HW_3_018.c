#include<stdio.h>
int main(){
    char input[100];//สร้างตัวแปรinputเป็นarrayขนาด100ช่อง

    printf("Input the string: ");
    scanf("%s", input);//รับค่าตัวข้อความมาเก็บในตัวแปรinput

    for (int i = 0; input[i] != '\0'; i++) {//วนลูปตามจำนวนตัวแปรinputให้ไม่มีช่องว่าง
        printf("%c ", input[i]);//เเสดงจำนวนตัวโดยเว้นวรรค
    }

}