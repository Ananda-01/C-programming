#include<stdio.h>
int main()
{
    int n;
    int sum1=0;
    int sum2=0;
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    
    for(int i=0;i<n;i++)
    {
        if(ar[i]%2==0)
        {
            sum1=sum1+ar[i];
        }
        else
        {
            sum2=sum2+ar[i];
        }
    }
    printf("%d %d",sum1,sum2);
   
    
    return 0;
}