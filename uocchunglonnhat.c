#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int gcd(int a, int b)
{
    if(a == 0 || b == 0)
        return (a + b);
    while( a != b)
    {
        if(a > b)
            a = a - b;
        else
            b = b - a;
    }
    return a;
    
}
int main()
{
    // FILE *f;
    // f = fopen("testC.inp", "r");
    // f = fopen("testC.out", "w");
    int a,b;
    printf("Nhap a va b: ");
    scanf("%d %d", &a, &b);
    printf("Uoc chung lon nhat cua %d va %d la: %d", a, b, gcd(a, b));
    return 0;
}
