#include<stdio.h>
int main()
{
    int a,b,sum,mul,sub;
    float div;
    scanf("%d %d",&a,&b);
    sum=a+b;
    mul=a*b;
    sub=a-b;
    div=a*1.0/b;
    printf("The value of:%d %d %d %0.2f",sum,mul,sub,div);
    
    // We can check any random value

    return 0;
}