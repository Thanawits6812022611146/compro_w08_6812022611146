#include <stdio.h>

int main() {


    int start_number, stop_number;
    printf("Enter start number: "); // ใส่ตัวเลขเริ่มต้น
    scanf("%d", &start_number);
    printf("Enter stop number: "); // ใส่ตัวเลขที่สิ้นสุด
    scanf("%d", &stop_number);
    printf("number start %d is number stop %d:\n", start_number, stop_number);
    printf("-------------\n");

    for (int i = start_number; i <= stop_number; i++) { // ตัวเลขเริ่มต้นน้อยกว่าหรือเท่ากับตัวเลขที่สิ้นสุด
       
    }printf("sequential numbers are: ");

    while (start_number <= stop_number)
    {
    printf("%d ", start_number);
    start_number++; 
    
    }
   printf("thanks you.\n");
    return 0;

}
