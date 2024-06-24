/*#include<stdio.h>
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

int main(){

	struct Node * head;
	struct Node * second;
	struct Node * third;

	// Allocate memory for nodes in the linked list in Heap
	head = (struct Node *) malloc(sizeof(struct Node));
	second = (struct Node *) malloc(sizeof(struct Node));
	third = (struct Node *) malloc(sizeof(struct Node));

	// Link first and second nodes
	head->data = 7;
	head->next = second;

	// Link second and third nodes
	second->data = 11;
	second->next = third;

	// Terminate the list at the third node
	third->data = 66;
	third->next = NULL;
	
	
	linkedlisttraversal(head);
return 0;
}*/






//__________________________________________________________________________________________
//__________________________________________________________________________________________


//											OR


//__________________________________________________________________________________________
//__________________________________________________________________________________________


/*#include<stdio.h>
#include<stdlib.h>

struct s{
	int data;
	struct s * next;
};

void linkedlisttraversal(struct s *ptr)
{
	while(ptr!=NULL)
	{
		printf("Element : %d\n",ptr->data);
		ptr=ptr->next;
	}
}

int main(){

	struct s * head;
	struct s * second;
	struct s * third;

	// Allocate memory for nodes in the linked list in Heap
	head = (struct s *) malloc(sizeof(struct s));
	second = (struct s *) malloc(sizeof(struct s));
	third = (struct s *) malloc(sizeof(struct s));

	// Link first and second nodes
	head->data = 7;
	head->next = second;

	// Link second and third nodes
	second->data = 11;
	second->next = third;

	// Terminate the list at the third node
	third->data = 66;
	third->next = NULL;
	
	
	linkedlisttraversal(head);
return 0;
}
*/



//__________________________________________________________________________________________
//__________________________________________________________________________________________


//											Insertion in a linked list


//__________________________________________________________________________________________
//__________________________________________________________________________________________




//CASE 1 -> INSERTION ON FIRST POSITION
//________________________________________________________________________________
//________________________________________________________________________________




/*#include<stdio.h>
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



struct Node * insertAtFirst(struct Node *head, int data){
	struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
	ptr->next = head;
	ptr->data=data;
	return ptr;

}


int main(){

	struct Node * head;
	struct Node * second;
	struct Node * third;

	// Allocate memory for nodes in the linked list in Heap
	head = (struct Node *) malloc(sizeof(struct Node));
	second = (struct Node *) malloc(sizeof(struct Node));
	third = (struct Node *) malloc(sizeof(struct Node));

	// Link first and second nodes
	head->data = 7;
	head->next = second;

	// Link second and third nodes
	second->data = 11;
	second->next = third;

	// Terminate the list at the third node
	third->data = 66;
	third->next = NULL;
	
	printf("Original linked list!! \n");
	linkedlisttraversal(head);

	printf("After insertion linked list!! \n");
	head= insertAtFirst(head,55);
	linkedlisttraversal(head);
	
return 0;
}*/













//__________________________________________________________________________________________
//__________________________________________________________________________________________


//Case 2 -> insertion between the linked list


//__________________________________________________________________________________________
//__________________________________________________________________________________________


/*#include<stdio.h>
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



struct Node * insertAtFirst(struct Node *head, int data){
	struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
	ptr->next = head;
	ptr->data=data;
	return ptr;

}


struct Node * insertAtIndex(struct Node *head, int data, int index){

struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
struct Node * p = head;
int i = 0;

while (i!=index-1)
{

	p= p->next;
	i++;
}
ptr->data=data;
ptr->next = p->next;
p->next = ptr;
return head;

}


int main(){

	struct Node * head;
	struct Node * second;
	struct Node * third;

	// Allocate memory for nodes in the linked list in Heap
	head = (struct Node *) malloc(sizeof(struct Node));
	second = (struct Node *) malloc(sizeof(struct Node));
	third = (struct Node *) malloc(sizeof(struct Node));

	// Link first and second nodes
	head->data = 7;
	head->next = second;

	// Link second and third nodes
	second->data = 11;
	second->next = third;

	// Terminate the list at the third node
	third->data = 66;
	third->next = NULL;
	
	printf("Original linked list!! \n");
	linkedlisttraversal(head);

	printf("After insertion linked list!! \n");
//	head= insertAtFirst(head,55);

	head= insertAtIndex(head,151,2);
	linkedlisttraversal(head);
	
return 0;
}*/







//__________________________________________________________________________________________
//__________________________________________________________________________________________


//Case 3 -> insertion At the End of linked list


//__________________________________________________________________________________________
//__________________________________________________________________________________________








/*#include<stdio.h>
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



struct Node * insertAtFirst(struct Node *head, int data){
	struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
	ptr->next = head;
	ptr->data=data;
	return ptr;

}



struct Node * insertAtEnd(struct Node *head, int data){
	struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));	
	
	ptr->data=data;
	struct Node * p=head;
	while(p->next!=NULL)
	{
		p=p->next;
		
	}
	p->next=ptr;
	ptr->next=NULL;
	return head;
	
}




struct Node * insertAtIndex(struct Node *head, int data, int index){

struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
struct Node * p = head;
int i = 0;

while (i!=index-1)
{

	p= p->next;
	i++;
}
ptr->data=data;
ptr->next = p->next;
p->next = ptr;
return head;

}


int main(){

	struct Node * head;
	struct Node * second;
	struct Node * third;

	// Allocate memory for nodes in the linked list in Heap
	head = (struct Node *) malloc(sizeof(struct Node));
	second = (struct Node *) malloc(sizeof(struct Node));
	third = (struct Node *) malloc(sizeof(struct Node));

	// Link first and second nodes
	head->data = 7;
	head->next = second;

	// Link second and third nodes
	second->data = 11;
	second->next = third;

	// Terminate the list at the third node
	third->data = 66;
	third->next = NULL;
	
	printf("Original linked list!! \n");
	linkedlisttraversal(head);

	printf("After insertion linked list!! \n");
//	head= insertAtFirst(head,55);
//	head= insertAtIndex(head,151,2);
	
	head= insertAtEnd(head,251);
	linkedlisttraversal(head);
	
return 0;
}*/







//__________________________________________________________________________________________
//__________________________________________________________________________________________


//Case 4 -> insertion After given index  of linked list


//__________________________________________________________________________________________
//__________________________________________________________________________________________








/*#include<stdio.h>
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



struct Node * insertAtFirst(struct Node *head, int data){
	struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
	ptr->next = head;
	ptr->data=data;
	return ptr;

}



struct Node * insertAtEnd(struct Node *head, int data){
	struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));	
	
	ptr->data=data;
	struct Node * p=head;
	while(p->next!=NULL)
	{
		p=p->next;
		
	}
	p->next=ptr;
	ptr->next=NULL;
	return head;
	
}






struct Node * insertAfterNode(struct Node *head, struct Node *prevNode, int data){
	struct Node * ptr = (struct Node *) malloc(sizeof(struct Node) );
	ptr->data = data;

	ptr->next = prevNode->next;
	prevNode->next = ptr;

	return head;
}


struct Node * insertAtIndex(struct Node *head, int data, int index){

struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
struct Node * p = head;
int i = 0;

while (i!=index-1)
{

	p= p->next;
	i++;
}
ptr->data=data;
ptr->next = p->next;
p->next = ptr;
return head;

}


int main(){

	struct Node * head;
	struct Node * second;
	struct Node * third;

	// Allocate memory for nodes in the linked list in Heap
	head = (struct Node *) malloc(sizeof(struct Node));
	second = (struct Node *) malloc(sizeof(struct Node));
	third = (struct Node *) malloc(sizeof(struct Node));

	// Link first and second nodes
	head->data = 7;
	head->next = second;

	// Link second and third nodes
	second->data = 11;
	second->next = third;

	// Terminate the list at the third node
	third->data = 66;
	third->next = NULL;
	
	printf("Original linked list!! \n");
	linkedlisttraversal(head);

	printf("After insertion linked list!! \n");
//	head= insertAtFirst(head,55);
//	head= insertAtIndex(head,151,2);
//	head= insertAtEnd(head,251);
	
	head= insertAfterNode(head,second,51);
	linkedlisttraversal(head);
	
return 0;
}*/





//__________________________________________________________________________________________
//__________________________________________________________________________________________
//Circular Linked List

//Case 1 -> Insertion on the first Element


//__________________________________________________________________________________________
//__________________________________________________________________________________________




/*#include<stdio.h>
#include <stdlib.h>


struct Node{
	int data;
	struct Node * next;
};

void linkedListTraversal(struct Node *head)
{
	struct Node * ptr=head;
	
	
//	printf("Element is %d\n",ptr->data);
//	ptr=ptr->next;
//	
//	while(ptr!=head)
//	{
//		printf("Element is %d\n",ptr->data);
//		ptr=ptr->next;
//	}

	
//					OR

	
	do
	{
		printf("Element is %d\n",ptr->data);
		ptr=ptr->next;
	}while(ptr!=head);
}


struct Node * insertAtFirst(struct Node *head, int data){

	struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
	ptr->data = data;

	struct Node * p = head->next;
	while(p->next != head)
	{
		p = p->next;
	}
// At this point p points to the last node of this circular linked list

	p->next = ptr;
	ptr->next = head;
	head=ptr;

	return head;
}


int main(){
	struct Node *head;
	struct Node *second;
	struct Node *third;
	struct Node *fourth;

	// Allocate memory for nodes in the linked list in Heap
	head = (struct Node *)malloc(sizeof(struct Node));
	second = (struct Node *)malloc(sizeof(struct Node));
	third = (struct Node *)malloc(sizeof(struct Node));
	fourth = (struct Node *)malloc(sizeof(struct Node));

	// Link first and second nodes
	head->data = 4;
	head->next = second;

	// Link second and third nodes
	second->data = 3;
	second->next = third;

	// Link third and fourth nodes
	third->data = 6;
	third->next = fourth;

	// Terminate the list at the third node
	fourth->data = 1;
	fourth->next = head;
	
	printf("Circular linked list before insertion\n");
	linkedListTraversal(head);
	head=insertAtFirst(head,90);
	head=insertAtFirst(head,80);
	printf("Circular linked list before insertion");
	linkedListTraversal(head);
	return 0;
}*/









//__________________________________________________________________________________________
//__________________________________________________________________________________________


//Case -> 1,2,3 Write from your self just same as singly Linked list insertion


//__________________________________________________________________________________________
//__________________________________________________________________________________________


