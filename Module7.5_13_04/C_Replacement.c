#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }

    for(int j=0;j<n;j++)
    {
        if(ar[j]>0)
        {
            printf("1 ");
        }
        else if(ar[j]==0)
        {
            printf("0 ");
        }
        else 
        {
            printf("2 ");
        }
        //printf("%d ",ar[j]);
    }
    return 0;
}