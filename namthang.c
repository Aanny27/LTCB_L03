#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define ll long long

int main()
{
    int nam, thang;
    printf("Nhap nam va thang: ");
    scanf("%d %d",&nam, &thang);
    switch (thang)
    {
    case 1 : case 3 : case 5 : case 7 : case 8 : case 10 : case 12:
        printf("Thang %d nam %d co 31 ngay", thang, nam);
        break;
    case 4 : case 6 : case 11:
        printf("Thang %d nam %d co 30 ngay", thang, nam);
        break;
    case 2:
        if((nam % 400 == 0) || ((nam % 4 == 0) && (nam % 100 != 0)))
            printf("Thang %d nam %d co 29 ngay", thang, nam);
        else
             printf("Thang %d nam %d co 28 ngay", thang, nam);
         break;
    }
    return 0;
    //Aanny
}
