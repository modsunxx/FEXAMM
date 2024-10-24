#include<stdio.h>
int main(){
    for (int i = 5; i < 10; i++){//ทำลูปเพื่อสร้างบรรทัด5บรรทัด
        for (int j = 5; j <=i ; j++){//ทำลูปเพื่อสร้างเลข5เเละเพิ่มลงไปเรื่อยๆจนถึง9
            printf("%d",j);
        }
        printf("\n");
    }
    
}