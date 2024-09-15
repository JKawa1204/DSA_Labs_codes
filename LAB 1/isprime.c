#include<stdio.h>

int main()
{
    int a,check=0;
    printf("Jay Kawa\n");
    scanf("%d",&a);
    for(int i = 2; i <= a/2; i++)
    {
        if(a%i==0)
        {
            check++;
        }
    }

    if(check)
    {
        printf("Number is not prime.");
    }
    else
    {
        printf("Number is prime.");
    }
    return 0;
}