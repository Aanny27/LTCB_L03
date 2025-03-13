#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a, b, c, d, e, f;
    printf("Nhap cac gia tri a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);
    printf("Nhap cac gia tri d, e, f: ");
    scanf("%f %f %f", &d, &e, &f);
    double D, Dx, Dy, x, y;
    D = a * e - d * b;
    Dx = c * e - f * b;
    Dy = a * f - d * c;
    if (D == 0)
    {
        if (Dx == 0 && Dy == 0)
            printf("He phuong trinh co vo so nghiem");
        if( Dx != 0 || Dy != 0)
            printf("He phuong trinh vo nghiem");
    }
    else
    {
        x = Dx / D;
        y = Dy / D;
        printf("He phuong trinh co nghiem la: x = %f, y = %f", x, y);
    }
    return 0;
}
