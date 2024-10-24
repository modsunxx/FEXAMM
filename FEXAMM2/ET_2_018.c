#include<stdio.h>
int main(){
    int array[10];//ประกาศตัวแปรarrayให้มีขนาด10ช่อง
    int sum = 0;//ประกาศตัวแปรผลรวมมีค่าเป็น0
    for (int i = 1; i <= 10; i++){//วนลูปรับค่าไปเก็บในตัวแปรarray
        printf("Enter element %d : ",i);
        scanf("%d",&array[i]);
    }
    for (int j = 0; j < 10; j++){//วนลูปเพื่อเพิ่มค่าให้ตัวแปรsumเป็นค่่าผลรวมของarray
        sum+=array[j];
    }
    printf("sumary is : %d",sum);
}