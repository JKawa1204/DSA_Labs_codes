
#include <stdio.h>

#define size 4
int top = -1;
int stack[size];

int push(int a) {
  if (top == size - 1) {
    printf("stack is full\n");
    return 0;
  }
  top++;
  stack[top] = a;
  printf("Inserted number is %d\n", a);
  return 0;
}

int pop() {
  if (top == -1) {
    printf("stack is empty\n");
  }
  printf("Number removed is %d\n", stack[top]);
  stack[top] = 0;
  top--;
  return 0;
}

int peek() {
  if (top == -1) {
    printf("There is no element in the stack\n");
    return 0;
  }
  printf("The last entered element is %d\n", stack[top]);
}

int display() {
  if (top == -1) {
    printf("There is no element in the stack\n");
    return 0;
  }
  for (int i = 0; i <= top; i++) {
    printf("%d\n", stack[i]);
  }
  return 0;
}

int main() {
  int choice, a;
  int exit = 1;
  printf("Jay Kawa\n");
  while (exit) {
    printf("1.push\n2.pop\n3.peek\n4.display\n");
    scanf("%d", &choice);
    switch (choice) {
    case 1:
      printf("Enter the number to be inserted\n");
      scanf("%d", &a);
      push(a);
      break;

    case 2:
      pop();
      break;

    case 3:
      peek();
      break;

    case 4:
      display();
      break;

    default:
      break;
    }
    printf("Do you wanna exit ? If yes then press 0\n");
    scanf("%d", &exit);
  }

  return 0;
}