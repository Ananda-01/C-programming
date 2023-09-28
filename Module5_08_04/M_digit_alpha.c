// #include<stdio.h>
// int main()
// {
//     char a;
//     scanf("%c",&a);
//     if(a>=48 && a<=57)
//     {
//         printf("IS DIGIT\n");
//     }
//     else
//     {
//         printf("ALPHA\n");
//         if(a>=65 && a<=90)
//         {
//             printf("IS CAPITAL\n");
//         }
//         else
//         {
//             printf("IS SMALL\n");
//         }
//     }
//     return 0;
// }
#include <stdio.h>
int main()
{
    int x = 0;
    if (x == 1)
    {
        if (x == 0)
        {
            printf("inside if if\n");
        }
        else
        {
            printf("inside if else\n");
        }
    }
    else
    {
        printf("inside else\n");
    }
    return 0;
}