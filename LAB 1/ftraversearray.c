#include<stdio.h>

int main()
{
    int num[] = {1,2,3,4,5,6};
    int l = sizeof(num)/sizeof(num[0]);
     printf("Jay Kawa \n");
    for( long i = 0; i < l ; i++)
    {
        printf("%d\t",num[i]);
    }
    return 0;
}