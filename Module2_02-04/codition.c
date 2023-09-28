#include<stdio.h>
int main()
{
    int tk;
    scanf("%d",&tk);
    if(tk>=100)
    {
        printf("Sandwitch khabo");
    }
    else if(tk>=50)
    {
        printf("Singara khabo");
    }
    else if(tk >= 20)
    {
        printf("Ice cream khabo");
    }
    else
    {
        printf("Khabo na");
    }
    return 0;
}