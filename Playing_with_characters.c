#include <stdio.h>


int main() 
{
    char ch;
    char s[50];
    char sen[100];
    scanf("%c",&ch);
    scanf("%s",s);
    scanf(" %[^\n]%*c", sen);
    printf("%c", ch);
    printf("\n%s",s);
    printf("\n%s",sen);
    return 0;
}
