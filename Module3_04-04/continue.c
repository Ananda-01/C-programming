#include<stdio.h>
int main()
{
    int i;
    for (i = 1; i <= 20; i++)
    {
        if(i==15)
        {
            continue; // this keyword is used to ignore one iteration of a loop
        }
       printf("%d\n",i);
    }
    
    return 0;
}