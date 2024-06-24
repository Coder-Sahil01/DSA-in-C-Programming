#include<stdio.h>
#include<stdlib.h>

struct Node{
	int data;
	struct Node * next;
};

void linkedlisttraversal(struct Node *ptr)
{
	while(ptr!=NULL)
	{
		printf("Element : %d\n",ptr->data);
		ptr=ptr->next;
	}
}



//Case1: Deleting the first element from the linked list
struct Node * deleteFirst(struct Node * head)
{

	struct Node * ptr = head;
	head = head->next;
	free(ptr);
	return head;
}


// Case 2: Deleting the element at a given index from the linked list
struct Node * deleteAtIndex(struct Node * head, int index)
{
	struct Node *p = head;
	struct Node *q = head->next;
	int i;
	for (i = 0; i < index-1; i++)

	{
		p = p->next;
		q=q->next;
	}
	p->next = q->next;
	free(q);
	return head;
}


// Case 3: Deleting the last element
struct Node * deleteAtLast (struct Node * head)
{

	struct Node *p = head;
	struct Node *q = head->next;
	while(q->next !=NULL)
	{
		p=p->next;
		q=q->next;
	}

	p->next = NULL;
	free(q);
	return head;
}



// Case 4: Deleting the element with a given value from the linked list
struct Node * deleteAtValue(struct Node * head, int value){
struct Node *p = head;
struct Node *q = head->next;
while(q->data=value && q->next!= NULL)
{
	p=p->next;
	q=q->next;
	
}

if(q->data==value)
{
	p->next=q->next;
	free(q);
}
return head;
}



int main(){

	struct Node * head;
	struct Node * second;
	struct Node * third;
	struct Node * fourth;

	// Allocate memory for nodes in the linked list in Heap
	head = (struct Node *) malloc(sizeof(struct Node));
	second = (struct Node *) malloc(sizeof(struct Node));
	third = (struct Node *) malloc(sizeof(struct Node));
	fourth = (struct Node *) malloc(sizeof(struct Node));

	// Link first and second nodes
	head->data = 5;
	head->next = second;

	// Link second and third nodes
	second->data = 13;
	second->next = third;
	
	// Link third  and fourth nodes
	third->data = 16;
	third->next = fourth;
	
	
	// Terminate the list at the fourth node
	fourth->data = 32;
	fourth->next = NULL;
	
	printf("Linked list before deletion\n");
	linkedlisttraversal(head);
	
	
//	head=deleteFirst(head);  //   case -> 1  for delete first element 
//	printf("Linked list after deletion\n");
//	linkedlisttraversal(head);	
	
	
//	head=deleteAtIndex(head,2); //   case -> 2
//	linkedlisttraversal(head);
	
	
//	head=deleteAtLast(head); //   case -> 3
//	linkedlisttraversal(head);


	head=deleteAtValue(head,16); //   case -> 4
	linkedlisttraversal(head);

return 0;
}




