#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n%2==0)   
    {
        printf("Even number");
    }
    else  // if(n%2 != 0 ,it's odd number)
    {
        printf("Odd number");
    }
    return 0;
}