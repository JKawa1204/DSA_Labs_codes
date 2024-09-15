#include <stdio.h>

#define max 7
int a[max];
int f = -1;
int r = -1;

void enqueue(int x) {
    if ((r == max - 1 && f == 0) || (r + 1 == f)) {  // Queue is full
        printf("Overflow of queue\n\n");
        return;
    } else if (f == -1 && r == -1) {  // Queue is empty
        f = 0;
        r = 0;
        a[r] = x;
    } else {
        if (r == max - 1 && f != 0) {  // Wrap around to the beginning
            r = 0;
        } else {
            r++;
        }
        a[r] = x;
    }
    printf("The element added to queue is %d\n\n", x);
}

void dequeue() {
    if (f == -1) {  // Queue is empty
        printf("Underflow of queue\n");
        return;
    } else if (f == r) {  // Queue has only one element
        printf("Final element of queue is removed, which is %d\n\n", a[f]);
        a[f] = 0;
        f = -1;
        r = -1;
    } else {
        printf("The element removed is %d\n\n", a[f]);
        a[f] = 0;
        if (f == max - 1) {  // Wrap around to the beginning
            f = 0;
        } else {
            f++;
        }
    }
}

void display() {
    if (f == -1) {  // Queue is empty
        printf("Queue is empty\n");
        return;
    }
    printf("The elements of the queue are:\n");
    int i = f;
    while (1) {
        printf("%d\n", a[i]);
        if (i == r) {
            break;
        }
        if (i == max - 1) {  // Wrap around to the beginning
            i = 0;
        } else {
            i++;
        }
    }
}

int main() {
    while (1) {
        int n, c;
        printf("Enter the operation you want to perform:\n 1. Display\n 2. Add an element in queue\n 3. Remove the element\n 4. Exit\n\n");
        scanf("%d", &n);

        switch (n) {
            case 1:
                display();
                break;
            case 2:
                printf("Enter the element to be entered in queue:\n");
                scanf("%d", &c);
                enqueue(c);
                break;
            case 3:
                dequeue();
                break;
            case 4:
                return 0;
            default:
                printf("Invalid choice! Please try again.\n");
                break;
        }
    }
}
