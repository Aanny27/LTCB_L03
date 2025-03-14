#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b)
{
    int tam;
    tam = *a;
    *a = *b;
    *b = tam;

}
int main()
{
    int a, b;
    printf("Nhap a = ");
    scanf("%d", &a);
    printf("Nhap b = ");
    scanf("%d", &b);
    swap(&a, &b);
    printf("Gia tri a va b sau khi hoan doi gia tri la: %d %d", a, b);
    return 0;
}
