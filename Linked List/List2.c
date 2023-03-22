#include <stdio.h>
#include <stdlib.h>
 
struct Node
{
    int data;
    struct Node *next;
};

 
void linkedListTraversal(struct Node *ptr)  
{
    while (ptr != NULL)  
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

struct Node * insertAtFirst(struct Node *head, int data)
{
    struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->next = head;
    return ptr; 
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
 
    printf("enter the value of head:");
    scanf("%d",&head);

    printf("enter the value of second:");
    scanf("%d",&second);

    printf("enter the value of third:");
    scanf("%d",&third);

    printf("enter the value of fourth:");
    scanf("%d",&fourth);
    // Link first and second nodes
    head->next = second;
 
    // Link second and third nodes
    second->next = third;
 
    // Link third and fourth nodes

    third->next = fourth;
 
    // Terminate the list at the third node
    fourth->next = NULL;

    linkedListTraversal(head);
    return 0;

}