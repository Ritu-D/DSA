#include<stdio.h>
#include<stdlib.h>
struct node {
	int data;
	struct node*next;
};
struct node* head=0;
struct node* newnode;
struct node* temp;

void createnode(int input)
{
	newnode =(struct node*)malloc(sizeof(struct node));
	newnode->data =input;
	new node->data =0;
	if(head==0){
		head = newnode;
	}
	else{
		temp =head;
		while(temp->next !=NULL){
			temp=temp->next;
		}
		temp->next= newnode;
	}
}


void displaylist()
{
	temp =head;
	while(temp != NULL){
		printf("%d-->",temp->data);
		temp = temp->next;
		
	}
}


int main(){
	createnode(1);
	createnode(2);
	createnode(3);
	createnode(4);
	
	return 0;
}
