#include<stdio.h>
int main()
{
    int ar[5];
    // ar[0],ar[1],ar[2]....ar[i]
    // for input
    for(int i=0;i<5;i++)
    {
        scanf("%d",&ar[i]);
    }
    // for output
    for(int j=0;j<5;j++)
    {
        printf("%d ",ar[j]);
    }
    return 0;
}