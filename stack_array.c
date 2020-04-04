#include <stdio.h>
#include <stdlib.h>

struct stack {
    int *data;
    size_t size;
};

struct stack *stack_create(void);

int stack_push(struct stack *stk, int new_element);

struct stack *stack_create(void){
    int *A;
    A = (int *) calloc(3, sizeof(int));
    struct stack* ptr;
    ptr->data = A;
    return ptr;
}

int stack_push(struct stack *stk, int new_element){
    stk->data ++;
    *stk->data = new_element;
    return 0;
}

int main(){
    struct stack *s;
    s = stack_create();
    stack_push(s, 2);
    printf("%i", *s->data);
    stack_push(s, 3);
    printf("%i", *s->data);
    return 0;
}


