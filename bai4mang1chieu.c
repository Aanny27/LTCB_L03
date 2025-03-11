#include <stdio.h>
#include <stdlib.h>
void swap(int *a, int *b)
{
    int tam = *a;
    *a = *b;
    *b = tam;
}
void bubblesort( int a[], int n)
{
    for(int i = 0; i < n - 1; i++)
        for(int j = 0; j < n - i - 1; j++)
            {
                if(a[j] > a[j + 1])
                {
                   swap(&a[j], &a[j + 1]);
                }
            }
}
int main()
{
    int n, a[10000];
    n = sizeof(a) / sizeof(a[0]);
    printf("Nhap so phan tu trong mang: ");
    scanf("%d", &n);
    printf("Nhap mang: ");
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    bubblesort(a, n);
    printf("Mang sau khi da sap xep: ");
    for(int i = 0; i < n; i++)
        printf("%d ", a[i]);
    return 0;
}
