#include<stdio.h>
int main()
{
     int a,b,s,h;
    float c,d,i,j;
    scanf("%d%d",&a,&b);
    scanf("%f%f",&c,&d);
    s=a+b;
    h=a-b;
    i=c+d;
    j=c-d;
    printf("%d\t%d\n",s,h);
    printf("%0.2f\t%0.2f",i,j);
   

    return 0;
}