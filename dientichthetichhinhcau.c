#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r; 
    float pi = 3.14;
    printf("Nhap ban kinh hinh cau: ");
    scanf("%d", &r);
    printf("Dien tich hinh cau la: %.2f\n", 4 * pi * r * r);
    printf("The tich hinh cau la: %.2f\n", 4.0/3 * pi * r * r * r);
    return 0;
}
