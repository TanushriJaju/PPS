#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node*next;
};
typedef struct node snode;
snode*head=NULL;
void createlist(int x)
{
	snode*temp=NULL;
	head=(snode*)malloc(sizeof(snode));
	head->data=x;
	head->next=NULL;
}
void printlist(void)
{
snode*temp=head;
while(temp!=NULL)
{
	printf("%d==>",temp->data);
	temp=temp->next;
}
printf("\n");
}
void main()
{
	createlist(10);
	printlist();
	createlist(20);
	printlist();
}
