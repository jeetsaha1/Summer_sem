// Balanced Parenthesis Problem.

#include<stdio.h>
#include<stdlib.h>
struct stack{
    int top;
    int size;
    char *arr;
};

int isFull(struct stack *ptr){
    if (ptr->top == ptr->size-1)
    {
        return 1;
    }
    else
        return 0;
}

int isEmpty(struct stack *ptr){
    if (ptr->top == -1)
    {
        return 1;
    }
    else
        return 0;
}

void push(struct stack * ptr, char val){
    if(isFull(ptr))
        printf("Stack overflow");
    else{
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}

char pop(struct stack * ptr){
    char a = -1;
    if(isEmpty(ptr))
        printf("Stack underflow");
    else{
        a = ptr->arr[ptr->top];
        ptr->top--;
        return a;
    }
}

void display(struct stack *ptr){
    for (int i = ptr->top;i>=0; i--)
    {
        printf("Element: %c\n",ptr->arr[i]);
    }
    
}

int parenthesis_check(char *exp){
    struct stack * sp = (struct stack *)malloc(sizeof(struct stack));
    sp ->size = 20;
    sp->top = -1;
    sp->arr = (char*)malloc(sp->size*sizeof(char));

    for (int i = 0; exp[i] != '\0'; i++)
    {
        if(exp[i] == '('){
            push(sp,exp[i]);
        }
        else if(exp[i] == ')'){
            if(isEmpty(sp))
                return 0;
            pop(sp);
        }
    }
    if(isEmpty(sp))
        return 1;
    else   
        return 0;
}

int main(){
    char val[100];
    printf("Enter the string for parenthesis checking: ");
    scanf("%s",val);
    if(parenthesis_check(val))
        printf("The parenthesis are matched ");
    else
        printf("The parenthesis are not matched");
    return 0;
}