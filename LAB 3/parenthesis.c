#include <stdio.h>

char stack[20];
int top = -1;

void push(char x) {
  if (top >= 19) {
    printf("Stack is full\n");
    return;
  }
  stack[++top] = x;
}

char pop() {
  if (top == -1) {
    printf("Stack is empty\n");
    return '\0';
  }
  char x = stack[top];
  stack[top] = 0;
  top--;
  return x;
}

int match(char m, char n) {
  if (m == ')' && n == '(') {
    return 1;
  } else if (m == ']' && n == '[') {
    return 1;
  } else if (m == '}' && n == '{') {
    return 1;
  } else {
    return 0;
  }
}

int main() {
  char str[20];
  printf("Enter the equation : \n");
  scanf("%[^\n]s", str);
  char b;
  for (int i = 0; str[i] != '\0'; i++) {
    if (str[i] == '(' || str[i] == '[' || str[i] == '{') {
      push(str[i]);
    }
    if (str[i] == ')' || str[i] == ']' || str[i] == '}') {
      b = pop();
      if (!match(str[i], b)) {
        printf("Not a valid equation\n");
        return 0;
      }
    }
  }
  if (top == -1) {
    printf("Valid equation\n");
  } else {
    printf("Not a valid equation\n");
  }
}
