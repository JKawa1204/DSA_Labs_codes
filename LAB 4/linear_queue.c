#include<stdio.h>

#define max 7
int a[max];
int f=-1;
int r=-1;

void enqueue( int x )
{
    if(r==max-1)
    {
        printf("Overflow of queue\n\n");
        return ;
    }
    else if ( f == -1 && r == -1)
    {
        f=0;
        r=0;
        a[r]=x;
    }
    else
    {
        r++;
        printf("The element added to queue is %d\n\n",x);
        a[r] = x;
    }    
}

void dequeue()
{
    if(f== -1 )
    {
        printf("Underflow of queue\n");
        return;
    }
    else if ( f == r)
    {
        printf("Final element of queue is removed which is %d\n\n",a[f]);
        a[f]=0;
        f=0;
        r=0;
    }
    else
    {
        f++;
        printf("The element removed is %d\n\n",a[f]);
        a[f]=0;
    }
}

void display()
{
    for(int i=f;i<=r;i++)
    {
        printf("%d\n",a[i]);
    }
}

void main()
{
    while(1)
    {
        int n,c;
        printf("Enter the operation you wanna perform : \n 1.Display  \n2. Add an element in queue \n3. Remove the element.\n4. Exit.\n\n");
        scanf("%d",&n);

        switch (n)
        {
        case 1:
            printf("The elements of queue are :\n");
            display();
            break;

        case 2:
            printf("Enter the element to be entered in queue :\n");
            scanf("%d",&c);
            enqueue(c);
            break;

        case 3:
            dequeue();
            break;

        case 4:
            return;
        
        default:
            break;
        }
    }
}