#include<stdio.h>
int main()
{
    int tk;
    scanf("%d",&tk);
    if(tk>=5000)
    {
        printf("Cox's Bazar jabo\n");
        if(tk>=10000)
        {
            printf("Saintmartin jabo\n");
        }
        else
        {
            printf("Back korbo\n");
        }  
    }
    else
    {
        printf("Kthao jabo na\n");
    }
    
    return 0;
}