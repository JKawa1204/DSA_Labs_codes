#include<stdio.h>

int main()
{
    int num[10];
    int n;
    printf("Jay Kawa \n");
    printf("Enter the number of elements u wanna enter :");
    scanf("%d",&n);

    for(int i =0 ; i < n ; i++)
    {
        printf("Enter the %d element of the array : ",i);
        scanf("%d",&num[i]);
    }
    for( int i = 0; i < n ; i++)
    {
        printf("%d\t",num[i]);
    }
    return 0;
}