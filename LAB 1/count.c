#include<stdio.h>

int main()
{
    char str[30];
    int alpha=0,digit=0;
    printf(" Jay Kawa \n");
    printf("Enter the string : ");
    scanf("%[^\n]s",&str);
    for(int i = 0; i < strlen(str);i++)
    {
        if(isalpha(str[i]))
        {
            alpha++;
        }
        if(isdigit(str[i]))
        {
            digit++;
        }
    }
    printf("Digits = %d and Characters = %d",digit,alpha);
    return 0;
}