#include <stdio.h>
#include <stdlib.h>
#define ll long long

int main()
{
    float n;
    printf("Nhap diem so: ");
    scanf("%f", &n);
    if(n < 0)
        return 0;
    if(n < 5)
        printf("Hoc luc yeu");
    else if(n >= 5 && n < 7)
        printf("Hoc luc trung binh");
    else if(n >= 7 && n < 8)
        printf("Hoc luc kha");
    else if(n >= 8 && n < 9)
        printf("Hoc luc gioi");
    else
        printf("Hoc luc xuat sac");
    return 0;
    //Aanny

}
