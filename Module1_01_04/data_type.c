#include<stdio.h>
int main()
{
    // printing a character,word,sentence
    // char name[800];
    // scanf("%[^\n]",&name); // input as a text use [^\n]
    // printf("%s",name);
    char d;
    char word[50];
    char sen[700];
    scanf("%c %s %[^/n]", &d,&word,&sen);
    printf("%c\n%s\n%s",d,word,sen);
  
    return 0;
}