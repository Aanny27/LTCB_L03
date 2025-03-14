#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10] = {1,2,3,4,5,6,7,8,9,10}, *ptr;
    ptr = a;
    for(int i = 0; i < 10; i++)
    {
        printf("%d ",  *(ptr + i));
    }
    return 0;
}

