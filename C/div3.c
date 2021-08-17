#include <math.h>
#include <stdio.h>
 
long long int fraction(int a, int b)
{ 
    long long int gcf = 1;
    for (int i = 1; i <= a && i <= b; i++) 
    {
        if (a % i == 0 && b % i == 0) 
        {
            gcf = i;
        }
    }
    return gcf;
}
 

 
int main(void)
{
    int n;
    scanf ("%d",&n);

    while (n--)
    {
    double a;
    scanf("%lf",&a);
 
   long long int c = 10000;
    double b = (a - floor(a)) * c;
   long long int d = (int)floor(a) * c + (int)(b + .5f);
 
    while (1) 
    {
        if (d % 10 == 0) 
        {
            d = d / 10;
            c = c / 10;
        }
        else
            break;
    }
  long long  int whole = d/c;
  long long  int num = d%c;
 long long   int* i = &d;
 long long   int* j = &c;
 long long   int t = 0;
    while (t != 1)
    {
    long long    int gcf = fraction(d, c);
        if (gcf == 1) 
        {
            printf("[%lld/%lld]", d, c);
            printf("[%lld %lld/%lld]\n", whole, num, c);
            t = 1;
            printf("hi");
        }
        else
        {
            d/=gcf;
            c/=gcf;
            num/=gcf;
             printf("[%lld/%lld]", d, c);
            printf("[%lld %lld/%lld]\n", whole, num, c);
        }

    }


    }
    return 0;
}