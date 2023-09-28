#include<stdio.h>
int main()
{
    char n;
    scanf("%c",&n);
    if(n<'z')
    {
    char b=n+1;
    printf("%c",b);
    }
    else
    {
        printf("%c",'a');
    }
    return 0;
}