#include<stdio.h>
int isprime(int x);
int main()
{
    int a,ans;
     printf("Jay Kawa\n");
    scanf("%d",&a);
    ans = isprime(a);

    if(ans)
    {
        printf("Number is not prime.");
    }
    else
    {
        printf("Number is prime.");
    }
    return 0;
}

int isprime(int x)
{
    int check=0;
     for(int i = 2; i <= x/2; i++)
    {
        if(x%i==0)
        {
            check++;
        }
    }
    return check;
}