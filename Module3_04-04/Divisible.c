#include<stdio.h>
int main() {   
    int i;
    for(i=1;i<=18;i++)
    {
        if(i%5==0)
        {
            printf("%d",i);
            printf(" Yes\n");
        }
        else
        {
            printf("%d",i);
            printf(" No\n");
           
        }
    }
    return 0;
}
