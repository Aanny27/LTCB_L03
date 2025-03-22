///ִֶ𓂃 ࣪˖ ִֶָ🐇་༘࿐
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n, tong = 0;
    printf("Nhap so bat ki: ");
    scanf("%d", &n);
    if(n < 0)
    {
        printf("Phai nhap so nguyen duong");
        return 0;
    }
    if(n > 0)
    {
        for(int i = 1; i <= n / 2 ; i++)
        {
            if(n % i == 0 )
            {
                tong += i;
                if(i != n / i)
                    tong +=i;
            }
        }

            if(tong / 2 == n)
            {
                printf("So %d la so hoan hao", n);
                return 0;
            }     
            else
            {
                printf("So %d khong phai la so hoan hao", n);
                return 0;
            }
    }
    return 0;
}
