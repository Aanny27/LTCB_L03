#include <stdio.h>
#include <stdlib.h>
#define ll long long

ll luythua(ll x, ll y)
{
    int t = 1;
    while(y--)
    {
        t *= x;
    }
    return t;
}
int main()
{
    int x, y;
    printf("Nhap x, y: ");
    scanf("%d %d", &x, &y);
    luythua(x, y);
    printf("%d mu %d = %d",x, y, luythua(x, y));
    return 0;
    //Aanny
}