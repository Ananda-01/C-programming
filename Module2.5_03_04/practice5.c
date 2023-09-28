#include<stdio.h>
int main()
{
    int tk;
    scanf("%d",&tk);
    if(tk >= 10000)
    {
        printf("buy a Gucci Bag\n");
        if(tk >= 20000)
        {
            printf("buy a Gucci belt\n");
        }
    }
    if(tk >= 5000)
    {
        printf("buy a Levis Bag");
    }
    else 
    {
        printf("Something from new market");
    }
    return 0;
}