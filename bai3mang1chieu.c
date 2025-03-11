#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, a[10000], soduong = 0, soam = 0;
    printf("Nhap n: ");
    scanf("%d", &n);
    long long tong = 0, tongduong = 0,tongam = 0;
    float tb, tbd, tba;
    printf("Nhap mang: ");
    for(int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
    for(int i = 0; i < n; i++)
        {
            tong += a[i];
            tb = (float) tong/n;
            if(a[i] < 0)
                {
                    soam++;
                    tongam += a[i];
                }
            else if(a[i] > 0)
            {
                soduong++;
                tongduong += a[i];
            }
        }
        tba = (soam > 0) ? (float)tongam / soam : 0;
        tbd = (soduong > 0) ? (float)tongduong / soduong : 0;
    printf("Tong: %d, Tong cac so duong: %d, Tong cac so am: %d \n",tong,tongduong ,tongam);
    printf("Tong trung binh cac so: %.2f, Tong trung binh so am: %.2f, Tong trung binh so duong %.2f",tb, tba,tbd);
    return 0;
}
