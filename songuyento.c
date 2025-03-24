#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define ll long long

int songuyento(int n)
{
    if(n < 2)
        return 0;
    for(int i = 2; i <= n / 2; i++)
        if(n % i == 0)
            return 0;
    return 1;
}
int main()
{
    int n;
    printf("Nhap so bat ki: ");
    scanf("%d", &n);
    if(songuyento(n))
        printf("%d la so nguyen to ", n);
    else 
        printf("%d khong phai la so nguyen to ", n);
    return 0;
}
