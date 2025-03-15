#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define ll long long

ll fib(int n)
{
    if(n == 0) return 0;
    if(n == 1) return 0;
    int a = 1, b = 0, c;
    while(n--)
    {
        c = a;
        a += b;
        b = c;
    }
    return b;
}
int main()
{
    int n;
    printf("Nhap vao n: ");
    scanf("%d", &n);
    fib(n);
    printf("gia tri cua so thu n trong day fibonacci la: %d", fib(n));
    return 0;
    //Aanny
}