#include<stdio.h>
#include<stdlib.h>

struct node{
int data;
struct node *next;
}*head;

void createlist(int n);
void insertNodeAtBeginning(int data);
void displayList();

int main(){
int n,data;

printf("Enter the number of nodes:");
scanf("%d",&n);
createlist(n);

printf("\nThe Data in list Are\n :");
displayList();

printf("Enter the node to be inserted :");
scanf("%d",&data);
insertNodeAtBeginning(data);

printf("\nThe Data in list Are\n :");
displayList();
return 0;
}

void createlist(int n)
{
    struct node *newnode,*temp;
    int data,i;

    head = (struct node*)malloc(sizeof(struct node));
    if(head == NULL){
        printf("Unable to allocate memory");
    }
    else
    {
        printf("Enter the data OF NODE 1:");
        scanf("%d",&data);
        head -> data = data;
        head -> next = NULL;
        temp = head;
        for(i=2; i<=n; i++)
        {
            newnode = malloc(sizeof(struct node));

            if(newnode == NULL)
            {
                printf("Unable to allocate memory.");
                break;
            }
            else
            {
                printf("Enter the data of node %d: ", i);
                scanf("%d", &data);

                newnode->data = data; // Link data field of newNode with data
                newnode->next = NULL; // Link address field of newNode with NULL

                temp->next = newnode; // Link previous node i.e. temp to the newNode

                temp = temp->next;
            }
        }

        printf("SINGLY LINKED LIST CREATED SUCCESSFULLY\n");
    }
}

void insertNodeAtBeginning(int data)
{
    struct node *newnode,*temp;
    newnode = (struct node*)malloc(sizeof(struct node));
    if(newnode == NULL){
        printf("Unable to allocate memory");
    }
    else
    {
        newnode->data = data;
        newnode->next = NULL;
        temp = head;

        while(temp != NULL && temp->next != NULL)
            temp = temp->next;
        temp->next = newnode;
        printf("The data inserted successfully");
    }
}

void displayList()
{
    struct node *temp;
    if(head == NULL)
    {
        printf("List is empty");
    }
    else{
        temp = head;
        while(temp != NULL)
        {
            printf("Data = %d\n",temp->data);
            temp = temp->next;
        }
    }
}
