#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a, b, c;
    printf("nhap vao 3 canh cua tam giac: ");
    scanf("%d %d %d", &a, &b, &c);
    if(a+b>c && a+c>b && b+c>a)
    {
        if(a==b && b==c)
        {
            printf("tam giac deu");
        }
        else if(a==b || b==c || a==c)
        {
            printf("tam giac can");
        }
        else if(a*a+b*b==c*c || a*a+c*c==b*b || b*b+c*c==a*a)
        {
            printf("tam giac vuong");
        }
        else
        {
            printf("tam giac thuong");
        }
    }
    else
    {
        printf("khong phai tam giac");
    }
    int dientich, chuvi;
    chuvi = a+b+c;
    float p = chuvi/2;
    dientich = sqrt(p*(p-a)*(p-b)*(p-c));
    printf("\nchu vi: %d\n", chuvi);
    printf("dien tich: %d", dientich);
    return 0;
}
