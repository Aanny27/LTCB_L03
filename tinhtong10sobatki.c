#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define ll long long

int main()
{
    int n = 10;
    double m, sum = 0;
    while (n--) 
    {
        scanf("%lf", &m);
        sum += m;
    }
    printf("Tong 10 so tren la: %2.lf", sum);
    return 0;
}
