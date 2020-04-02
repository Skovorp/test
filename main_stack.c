#include <stdio.h>
#include <stdlib.h>

struct stack {
    int *data;
    size_t size;
    struct stack *next;
};

struct stack *stack_new(void){
    //printf("%o", sizeof(struct stack));
    return (struct stack *) malloc(sizeof(struct stack));
}


struct stack *stack_push(struct stack *stk, int new_element){
    struct stack* N;
    N = stack_new();
    N->next = stk;
    stk = N;
    *N->data = new_element;
}


int main() {
    //printf("%o", sizeof(struct stack));

    struct stack* H;
    H = stack_new();
    H->next=NULL;
    *H->data = 1;
    printf("%i", H->data);
    return 0;
}
//char * p3 = (char *) malloc(20)

