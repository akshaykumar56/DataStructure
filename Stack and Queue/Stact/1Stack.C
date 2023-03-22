// Stacks And Queues -->Abstract data types containing elements in linear order.Operation is allowed 
// only at ends.
// Stack(LIFO) --> Insertion, Deletion Allowed only at one end.
// parenthesis matching is the application of stack.

// PUSH and POP are the operation performed on the stack.

// in stack insertion and deletion take place at the top.
// insertion is done by Push operation and deletion is done by pop operation.


// Stack implementation using array
//1. --> one dimensional array  --> store the element of the stack
//2. variable (top)-->index of element of the top of stack
//3. Stack is empty --> top is -1

// PUSH operation 
               // Top is inreased by one 
               // new element is placed at  index top
// POP operation 
               //Element at index top is taken out 
               // top is increased by one


// isEmpty(): This operation just checks if the top member equals -1. 
//This works in a constant time, hence, O(1).

// isFull(): This operation just checks if the top member equals size -1. 
//Even this works in a constant time, hence, O(1).

// push(): Pushing an element in a stack needs you to just increase the value of top by 1 
// and insert the element at the index. This is again a case of O(1).

// pop(): Popping an element in a stack needs you to just decrease the value of top by 1 
// and return the element we ignored. This is again a case of O(1).

// peek(): Peeking at a position just returns the element at the index, (top - position + 1), 
// which happens to work in a constant time. So, even this is an example of O(1).


/////////////////////////////////// Implementaation of Stack using array /////////////////////////////
#include<stdio.h>
#include<stdlib.h>
 
struct stack
{
    int size ;
    int top;
    int * arr;
};


//1. isEmpty --> is used to print that stack is empty or not.
int isEmpty(struct stack* ptr) // ptr store the address of struct stack type as declared above.
{
    if(ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

//2. isFull --> is used to print the stack is full or not.
int isFull(struct stack* ptr)
{
    if(ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
 
//3. Push --> used to enter a value in the stack
void push(struct stack* ptr, int val)
{
    if(isFull(ptr))
    {
        printf("Stack Overflow! Cannot push %d to the stack\n", val);
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}
 
//4. Pop --> used to withdraw a value from stack
int pop(struct stack* ptr)
{
    if(isEmpty(ptr))
    {
        printf("Stack Underflow! Cannot pop from the stack\n");
        return -1;
    }
    else
    {
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}

//5. peek --> position  of element in the stack
int peek(struct stack* sp, int i)
{
    int arrayInd = sp->top -i + 1;
    if(arrayInd < 0){
        printf("Not a valid position for the stack\n");
        return -1;
    }
    else{
        return sp->arr[arrayInd];
    }
}

//6. stackTop --> Used to print the top of the stack
int stackTop(struct stack* sp)
{
    return sp->arr[sp->top];
}


//7. stackBottom --> Used to print the bottom of the stack
int stackBottom(struct stack* sp)
{
    return sp->arr[0];
}

int main(){
    struct stack *sp = (struct stack *) malloc(sizeof(struct stack)); // sp is a pointer store the address of struct type
    sp->size = 10;
    sp->top = -1;
    sp->arr = (int *) malloc(sp->size * sizeof(int));
    printf("Stack has been created successfully\n");
    push(sp, 1);
    push(sp, 23);
    push(sp, 99);
    push(sp, 75);
    push(sp, 3);
    push(sp, 64);
    push(sp, 57);
    push(sp, 46);
    push(sp, 89);
    push(sp, 6); // ---> Pushed 10 values 
    // push(sp, 46); // Stack Overflow since the size of the stack is 10
    printf("After pushing, Full: %d\n", isFull(sp));
    printf("After pushing, Empty: %d\n", isEmpty(sp));
    
    
    printf("Popped %d from the stack\n", pop(sp)); // --> Last in first out!
    printf("Popped %d from the stack\n", pop(sp)); // --> Last in first out!
    printf("Popped %d from the stack\n", pop(sp)); // --> Last in first out!

    printf("\nlinked list traversal :\n");
    for (int j = 1; j <= sp->top + 1; j++)
    {
        printf("The value at position %d is %d\n", j, peek(sp, j));
    }

    printf("The top most value of this stack is %d\n", stackTop(sp)); // print the top most value of the stack.
    printf("The bottom most value of this stack is %d\n", stackBottom(sp)); // print the bottom most value of the stack.

    return 0;
   
}



