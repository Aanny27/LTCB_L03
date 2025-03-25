#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define ll long long
int main()
{
    int sum = 0;
    for(int i = 1;i <= 10; i++)
    {
        if(i % 2 != 0)
            sum += i;
    }
    printf("%d", sum);
    return 0;
}
