#include<stdiuo.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node*prev, *next;
};
typedef struct node dnode;
dnode*head=NULL;
//create node
void createdoublelist(int x)
{
dnode*tempNode=NULL;
tempNode=(dnode*)malloc(sizeof(dnode));
tempNode->data=x;
tempNode->next=tempNode->prev=NULL;
head=tempNode;
return;
}
