#include<stdio.h>
#include<stdlib.h>

struct node{
int data;
struct node *next;
}*head;

void createList(int n);
void insertatspecificposition(int data,int position);
void displayList();

int main(){
    int n,data,position;

    printf("Enter the number of nodes :");
    scanf("%d",&n);
    createList(n);

    printf("Display List");
    displayList();

    printf("Enter the number to be inserted :");
    scanf("%d",&data);
    printf("Enter the specific postion:");
    scanf("%d",&position);
    insertatspecificposition(data,position);

    printf("Display list");
    displayList();

}

void createList(int n)
{
    struct node *newnode,*temp;
    int data,i;

    head = (struct node*)malloc(sizeof(struct node));
    if(head == NULL){
        printf("unable to allocate memeory");
    }
    else{
        printf("Enter the data 1:");
        scanf("%d",&data);
        head->data = data;
        head->next = NULL;
        temp = head;
       for(i=2;i<=n;i++)
        {
        newnode = (struct node*)malloc(sizeof(struct node));
        if(newnode == NULL){
            printf("unable to allocate memory");
            break;
        }
        else{
            printf("Enter the data %d: ", i);
            scanf("%d", &data);
            newnode->data = data;
            newnode->next = NULL;
            temp->next = newnode;
            temp = temp->next;
        }
    }
}
}

void insertatspecificposition(int data,int position)
{
    int i;
    struct node *newnode,*temp;
    newnode = (struct node*)malloc(sizeof(struct node));
    if(newnode == NULL){
        printf("unable to allocate memeory");
    }
    else{
        newnode->data = data;
        newnode->next = NULL;
        temp = head;
    }
    for(i=2;i<=position-1;i++){
        temp = temp->next;
        if(temp == NULL);
        break;
    }
    if(temp != NULL){
        newnode->next = temp->next;
        temp->next = newnode;
        printf("The data inserted successfully");
    }
    else{
        printf("Can't able to insert data at specified position");
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

