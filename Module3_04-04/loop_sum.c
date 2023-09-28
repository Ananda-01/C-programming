#include<stdio.h>
int main()
{
    int sum=0;
    int i;
    for(i=1;i<=1000;i=i+1)
    {
        sum=sum+i;
    }
    printf("%d",sum);
    return 0;
}