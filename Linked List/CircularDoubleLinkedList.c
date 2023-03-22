#include <stdio.h>
#include <stdlib.h>
 
struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
};

 
void linkedListTraversal(struct Node *head)  // head ki value de rahe hai hum,head kuch bhi ho sakta second,third,fourth
{      
    struct Node *ptr = head;
    do
    {
        printf("Element is %d\n", ptr->data);
        ptr = ptr->next;
    }
    while(ptr!=head);
}

void linkedListReverseTraversal(struct Node *head)  
{      
    struct Node *ptr = head;
    do
    {
        printf("Element is %d\n", ptr->data);
        ptr = ptr->prev;
    }
    while(ptr!=head);
}



int main()
{
    struct Node *head;   
    struct Node *second;
    struct Node *third;
    struct Node *fourth;
 
    // Allocate memory for nodes in the linked list in Heap
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));
 
    // Link first and second nodes
    head->data = 7;
    head->next = second;
    head->prev= fourth;
 
    // Link second and third nodes
    second->data = 11;
    second->next = third;
    second->prev= head;
 
    // Link third and fourth nodes
    third->data = 41;
    third->next = fourth;
    third->prev = second;
 
    // Terminate the list at the third node
    fourth->data = 66;
    fourth->next = head;
    fourth->prev=third;

    linkedListTraversal(third);
    printf("reverse traversal \n");
    linkedListReverseTraversal(fourth);
    return 0;

}