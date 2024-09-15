#include <stdio.h>
#include <string.h>
#define size 20

char stack[size];
char stack2[size];
int top = -1;
int top2 = -1;

int push(char a) {
  if (top == size - 1) {
    printf("Stack Overflow");
  }
  top++;
  stack[top] = a;
  return 0;
}

char pop() {
  char c = stack[top];
  stack[top] = 0;
  top--;
  return c;
}

int main() {
  char a[20];
  printf("Enter the string\n");
  scanf("%[^\n]s", &a);
  for (int i = 0; i < strlen(a); i++) {
    push(a[i]);
  }
  for (int i = 0; i < strlen(a); i++) {
    stack2[i] = pop();
  }
  printf("%s", stack2);
  return 0;
}