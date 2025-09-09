#include <stdio.h>

int main() {
    
    int count = 2; //กำหนดตัวแปร
    while (count <= 10) {//ค่าตัวแปรน้อยกว่าเท่ากับ10
        if (count % 2 == 0) 
        { 
            printf("%d\n", count);
        }
        count++;
    }
    printf("End of loop\n", count); // จบ loop
    return 0;
}
    