#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define ll long long
void sapxep(int a[101], int n)
{
    int temp;
    for(int i = 0;i < n - 1; i++)
    {
        for(int j = 0; j < n - i - 1; j++)
            if(a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
    }
}
void ghepmang(int a[], int n, int b[], int m, int kq[])
{
    int i = 0, j = 0, k = 0;
    while(i < n && j < m)
    {
        if(a[i] < b[j])
            kq[k++] = a[i++];
        else
            kq[k++] = b[j++];
    }
    while(i < n)
        kq[k++] = a[i++];
    while(j < m)
        kq[k++] = b[j++];
}
int main()
{
    int n, m;
    printf("Nhap vao so phan tu cua mang thu nhat va thu hai: ");
    scanf("%d %d", &n, &m);
    int a[n], b[m], kq[10000];
    printf("Nhap cac phan tu cua mang thu nhat: ");
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Nhap cac phan tu cua mang thu hai: ");
    for(int i = 0; i < m; i++)
        scanf("%d", &b[i]);
    sapxep(a, n);
    sapxep(b, m);
    printf("Mang thu 1 sau khi da sap xep la: ");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);   
    }
    printf("\n"); 
    printf("Mang thu 2 sau khi da sap xep la: ");
    for(int i = 0; i < m; i++)
    {   
        printf("%d ", b[i]);
    }
    printf("\n");
    ghepmang(a, n, b, m, kq);
    printf("Sau khi ghep 2 mang: ");
    for(int i = 0; i < n + m; i++)
        printf("%d ", kq[i]);
    return 0;
}
