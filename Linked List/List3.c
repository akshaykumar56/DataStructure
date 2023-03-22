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
 

  
    printf("enter first element");
    scanf("%d",head->data);

    printf("enter second element");
    scanf("%d",second->data);

    printf("enter third element");
    scanf("%d",third->data);

    printf("enter fourth element");
    scanf("%d",fourth->data);

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