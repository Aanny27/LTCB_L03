#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define ll long long

int main()
{
    int n, dem = 0, x;
    printf("Nhap vao so phan tu cua mang: ");
    scanf("%d", &n);
    int a[n];
    printf("Nhap cac phan tu cua mang: ");
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Nhap x: ");
    scanf("%d", &x);
    for(int i = 0; i < n; i++)
    {
        if(a[i] == x)
            dem++;
    }
    printf("So %d xuat hien %d lan", x, dem);
    return 0;
                                                                                                                                                                                                                                                                                                                        //Aanny27
}
