#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    printf("Nhap a: ");
    scanf("%d", &a);
    printf("Nhap b: ");
    scanf("%d", &b);
    printf("Tong cua a va b la: %d\n", a + b);
    printf("Hieu cua a va b la: %d\n", a - b);
    printf("Tich cua a va b la: %d\n", a * b);
    printf("Thuong cua a va b la: %d\n", a / b);
    if(a % b == 0)
        printf("a chia het cho b\n");
    else
        printf("a khong chia het cho b\n");
    return 0;
}
