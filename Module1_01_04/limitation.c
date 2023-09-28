#include<stdio.h>
int main()
{
    int a=1000000000;
    long long int b=1000000000000;
    float c=6.8474;
    double pi=3.14159766467364;
    printf("%d %lld %f %0.15lf",a,b,c,pi);
    return 0;
}

// maximum interger value is 2^32-1 or upto 10^9
// for more value we can use long long int type upto 10^18
// similarly float can calculate upto 7 decimal 
// double can calculate upto 15 decimal 