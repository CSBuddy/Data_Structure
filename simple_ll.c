#include<stdio.h>
#include<stdlib.h>

//Below code use to create structure of node
struct node{
//Node contains 2 parts ,data & link part	
	int data;
	struct node* link;
};
//These nodes currently not pointing to any other so we assigning it to NULL
	struct node* head=NULL;
	struct node* first=NULL;
	struct node* second=NULL;
	
int main(){
	
//Assigning memory in heap
	first=(struct node*)malloc(sizeof(struct node));
	second=(struct node*)malloc(sizeof(struct node));

//Head points to first node	
	head=first;
//2 is stored in data part of first node	
	first->data=2;
//First points to second node	
	first->link=second;
//4 is stored in data part of second node
	second->data=4;
//Second node points to null
	second->link=NULL;

	printf("Linklist is\n");
	printf("%d\n",first->data);
 	printf("%d\n",second->data);

return 0;


}
