#include<stdio.h>
#include<stdlib.h>

struct node{

	int data;
	struct node* link;
};
struct node*head;

struct node* insert_at_end(int x){
	struct node* ptr;
	struct node* temp;
	ptr=head;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->data=x;
	temp->link=NULL; 
	
	if(head != NULL){
	while(ptr->link!=NULL){
	ptr=ptr->link;
	
	}
	ptr->link=temp;
	return(head);
	}
	else{
	head=temp;
	}
}
void printlist(struct node*head){
	struct node* ptr;
	ptr=head;
	printf("list is:\n");
	while(ptr!=NULL)
	{
	  printf("%d",ptr->data);
	  ptr=ptr->link;
 	}
	printf("\n");	
}

void main()
{
	head=NULL;
	int i,n,x;	
	printf("how many numbers ?\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	  printf("Enter the number\n");
	  scanf("%d",&x);
	  insert_at_end(x);
	 }
	printlist(head);
}
