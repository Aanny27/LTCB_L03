#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define ll long long

ll giaithua(ll n)
{
    int kq = 1;
   if(n == 0 || n == 1)
        return 1;
    for(int i = 1; i <= n;i++)
        kq *= i;
    return kq;
}
int main()
{
    int n;
    double sum = 0;
    scanf("%d", &n);
    for(int i = 1; i <= n;i++)
    {
        sum += 1.0 / giaithua(i);
    }
    printf("Tong = %.2lf", sum);
    return 0;
}
