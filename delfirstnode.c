#include<stdio.h>
#include<stdlib.h>

struct node{
int data;
struct node *next;
}*head;

void createList(int n);
void deletefirstnode();
void displayList();

int main()
{
    int n,choice;
    printf("Enter the number of nodes :");
    scanf("%d",&n);
    createList(n);

    printf("Data List :");
    displayList();

    printf("Enter 1 to delete first node :");
    scanf("%d",&choice);
    deletefirstnode();

    printf("Data List :");
    displayList();
}

void createList(int n)
{
    struct node *newnode,*temp;
    int data,i;
    head = (struct node*)malloc(sizeof(struct node));
    if(head == NULL)
    {
        printf("Unable to allocate memeory");
    }
    else{
        printf("Enter the data 1:");
        scanf("%d",&data);
        head->data = data;
        head->next = NULL;
        temp = head;
    for(i=2;i<=n;i++){
        newnode = (struct node*)malloc(sizeof(struct node));
        if(newnode == NULL)
        {
            printf("Unable to allocate memory");
            break;
        }
        else{
            printf("Enter the data %d\n:",i);
            scanf("%d",&data);
            newnode->data = data;
            newnode->next = NULL;
            temp->next = newnode;
            temp = temp->next;
        }
    }
}
}

void deletefirstnode()
{
    struct node *todelete;
    if(head == NULL){
        printf("Data is empty");
    }
    else{
        todelete = head;
        head= head->next;
        printf("Data Delete =%d\n",todelete->data);
        free(todelete);
        printf("The data have been deleted\n");
    }
}

void displayList()
{
    struct node *temp;
    if(head == NULL){
        printf("List is empty");
    }
    else{
        temp = head;
        while(temp != NULL){
                printf("The data =%d\n",temp->data);
            temp = temp->next;
        }
    }
}
