#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define ll long long
int gcd(int a, int b)
{
    while (a != b)
    {
        if(a > b)
            a -=b;
        else b -= a;
    }
    return a;
  
}
int main()
{
    int a, b;
    printf("Nhap 2 so bat ki: ");
    scanf("%d %d", &a, &b);
    int lcm = a * b / gcd(a,b);
    printf("Uoc chung lon nhat va boi chung nho nhat cua %d va %d la: %d va %d ", a, b, gcd(a,b), lcm);
    return 0;
    //Aanny
}
