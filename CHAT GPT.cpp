
#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head = NULL;
struct node *newnode;
struct node *temp;

void createnode(int input) {
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = input;
    newnode->next = NULL; // Corrected from new node->data = 0
    if (head == NULL) {
        head = newnode;
    } else {
        temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newnode;
    }
}

void displaylist() {
    temp = head;
    while (temp != NULL) {
        printf("%d --> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    createnode(1);
    createnode(2);
    createnode(3);
    createnode(4);
    displaylist();
    return 0;
}