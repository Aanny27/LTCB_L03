#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define ll long long

ll giaithua(ll n)
{
    int kq = 1;
   if(n == 0 || n == 1)
        return 0;
    for(int i = 1; i <= n;i++)
        kq *= i;
    return kq;
}
int main()
{
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    giaithua(n);
    printf("Giai thua cua %d la: %d ", n, giaithua(n));
    return 0;
    //Aanny
}
