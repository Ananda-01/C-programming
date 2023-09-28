#include<stdio.h>
int main()
{
    int n,cal;
    scanf("%d",&n);
    cal=n/1000;
    if(cal%2==0)
    {
        printf("Even\n");
    }
    else
    {
        printf("Odd\n");
    }
    
    return 0;
}