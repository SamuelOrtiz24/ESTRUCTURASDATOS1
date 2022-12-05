#include <stdio.h>
#define STACK_CAPACITY 10

typedef struct
{
  int pila[STACK_CAPACITY];
  int tope;
  int tam;
}Stack;

void setupStack(Stack *s);
int isStackEmpty(Stack s);
int isStackFull(Stack s);

int push(Stack *s, int value);
int pop(Stack *s, int *value);

int main(void) {
  Stack stack;
  int r;
  int dato;
  setupStack(&stack);
  r=push(&stack, 1);
  r=push(&stack, 2);
  r=push(&stack, 3);
  r=push(&stack, 4);
  r=push(&stack, 5);
  r=push(&stack, 6);
  r=push(&stack, 7);
  r=push(&stack, 8);
  r=push(&stack, 9);
  r=push(&stack, 10);
  r=pop(&stack, &dato);
  r=pop(&stack, &dato);
  r=pop(&stack, &dato);
  return 0;
}

void setupStack(Stack *s)
{
  s->tope= -1;
  s->tam= STACK_CAPACITY;
}

int isStackEmpty(Stack s)
{
  if(s.tope == -1)
    return 1;
  return 0;
}

int isStackFull(Stack s)
{
  if(s.tope == s.tam-1)
    return 1;
  return 0;
}

int push(Stack *s,int value)
{
  if(isStackFull(*s) == 0)
  {
    s->tope++;
    s->pila[s->tope] = value;
    return 1;
  }
  printf("Error: pila llena \n");
  return 0;
}

int pop(Stack *s, int *value)
{
  if (isStackEmpty(*s) == 0)
  {
    *value = s->pila[s->tope];
    s->tope--;
    printf("Dato eliminado: %d \n",*value);
    return *value;
  }
  printf("Error: pila vacía \n");
  return -1;
}
