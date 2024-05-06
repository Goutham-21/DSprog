#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
} * head;

void createList(int n);
void insertAtSpecificPosition(int data, int position);
void displayList();

int main() {
    int n, data, position;

    printf("Enter the number of nodes: ");
    scanf("%d", &n);
    createList(n);

    printf("Display List\n");
    displayList();

    printf("Enter the number to be inserted: ");
    scanf("%d", &data);
    printf("Enter the specific position: ");
    scanf("%d", &position);
    insertAtSpecificPosition(data, position);

    printf("Display list\n");
    displayList();

    return 0;
}

void createList(int n) {
    struct node *newnode, *temp;
    int data, i;

    head = (struct node *)malloc(sizeof(struct node));
    if (head == NULL) {
        printf("Unable to allocate memory");
    } else {
        printf("Enter the data 1: ");
        scanf("%d", &data);
        head->data = data;
        head->next = NULL;
        temp = head;
        for (i = 2; i <= n; i++) {
            newnode = (struct node *)malloc(sizeof(struct node));
            if (newnode == NULL) {
                printf("Unable to allocate memory");
                break;
            } else {
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

void insertAtSpecificPosition(int data, int position) {
    int i;
    struct node *newnode, *temp;
    newnode = (struct node *)malloc(sizeof(struct node));
    if (newnode == NULL) {
        printf("Unable to allocate memory");
    } else {
        printf("Enter the data to be inserted: ");
        scanf("%d", &data);
        newnode->data = data;
        newnode->next = NULL;
        temp = head;
        for (i = 2; i <= position - 1; i++) {
            temp = temp->next;
            if (temp == NULL)
                break;
        }
        if (temp != NULL) {
            newnode->next = temp->next;
            temp->next = newnode;
            printf("The data inserted successfully\n");
        } else {
            printf("Can't able to insert data at the specified position\n");
        }
    }
}

void displayList() {
    struct node *temp;
    if (head == NULL) {
        printf("List is empty\n");
    } else {
        temp = head;
        while (temp != NULL) {
            printf("Data = %d\n", temp->data);
            temp = temp->next;
        }
    }
}
