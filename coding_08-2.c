#include <stdio.h>


int main() {
    for (int i=2;i<=10;i++){ // กำหนดช่วง 2-10 
        if (i%2==0) {  // ต้องเป็นเลขคู่
            printf("%d\n", i);  // แสดงค่าตัวเลข
        }
    }
    printf("End of loop\n");  // จบ loop
   return 0;
}