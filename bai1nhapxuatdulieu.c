#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, mu2, mu3, mu4;
    printf("Nhap so bat ki: ");
    scanf("%d", &n);
    mu2 = n*n;
    mu3 = n*n*n;
    mu4 = n*n*n*n;
    printf("Gia tri cua cac so mu: \n mu 2 = %d, mu 3 = %d, mu 4 = %d", mu2, mu3, mu4);
    return 0;
}
