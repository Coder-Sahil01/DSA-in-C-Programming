//Implementing Queue Using Linked List 
//____________________________________________________________________________________________________

/*#include <stdio.h>
#include <stdlib.h>
 
struct Node *f = NULL;
struct Node *r = NULL;
 
struct Node
{
    int data;
    struct Node *next;
};
 
void linkedListTraversal(struct Node *ptr)
{
    printf("Printing the elements of this linked list\n");
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}
 
void enqueue(int val)
{
    struct Node *n = (struct Node *) malloc(sizeof(struct Node));
    if(n==NULL){
        printf("Queue is Full");
    }
    else{
        n->data = val;
        n->next = NULL;
        if(f==NULL){
            f=r=n;
        }
        else{
            r->next = n;
            r=n;
        }
    }
}
 
int dequeue()
{
    int val = -1;
    struct Node *ptr = f;
    if(f==NULL){
        printf("Queue is Empty\n");
    }
    else{
        f = f->next;
        val = ptr->data;
        free(ptr);
    }
    return val;
}
 
int main()
{
    linkedListTraversal(f);
    printf("Dequeuing element %d\n", dequeue());
    enqueue(34);
    enqueue(4);
    enqueue(7);
    enqueue(17);
    printf("Dequeuing element %d\n", dequeue());
    printf("Dequeuing element %d\n", dequeue());
//    printf("Dequeuing element %d\n", dequeue());
//    printf("Dequeuing element %d\n", dequeue());
    linkedListTraversal(f);
    return 0;
}*/






//____________________________________________________________________________________________________
//____________________________________________________________________________________________________

//Double-Ended Queue in Data Structure (DE-Queue Explained)

//____________________________________________________________________________________________________
//____________________________________________________________________________________________________



/*#include <stdio.h>
#include <stdlib.h>
 
struct Node *f = NULL;
struct Node *r = NULL;
 
struct Node
{
    int data;
    struct Node *next;
};
 
void linkedListTraversal(struct Node *ptr)
{
    printf("Printing the elements of this linked list\n");
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}
 
void enqueueR(int val)
{
    struct Node *n = (struct Node *) malloc(sizeof(struct Node));
    if(n==NULL){
        printf("Queue is Full");
    }
    else{
        n->data = val;
        n->next = NULL;
        if(f==NULL){
            f=r=n;
        }
        else{
            r->next = n;
            r=n;
        }
    }
}



void enqueueF(int val)
{
    struct Node *n = (struct Node *) malloc(sizeof(struct Node));
    if(n==NULL){
        printf("Queue is Full");
    }
    else{
        n->data = val;
        if(f==NULL){
            f=r=n;
        }
        else{
        	n->next = f;
            f=n;
        }
    }
}


 
int dequeueF()
{
    int val = -1;
    struct Node *ptr = f;
    if(f==NULL){
        printf("Queue is Empty\n");
    }
    else{
        f = f->next;
        val = ptr->data;
        free(ptr);
    }
    return val;
}



int dequeueR()
{
    int val = -1;
    struct Node *ptr = r;
    struct Node *p = f;  // Start from the front of the queue
    
    if (f == NULL) {
       printf("Queue is Empty\n");
    } 
	else
	{
       while (p->next != r) 
	   {  // Traverse until the node before the rear
    		p = p->next;
       }
       val = r->data;
       p->next = NULL;  // Set the next pointer of the previous node to NULL
       free(r);
       r = p;  // Update the rear pointer to the previous node
    }
    return val;
}




 
int main()
{
    linkedListTraversal(f);
    printf("Dequeuing element %d\n", dequeueF());
    enqueueR(34);
    enqueueR(4);
    enqueueR(7);
    enqueueF(17);
    enqueueF(8);
    enqueueR(20);
    printf("before Dequeuing \n");
    linkedListTraversal(f);
    printf("After Dequeuing \n");
    printf("Dequeuing element %d\n", dequeueF());
    printf("Dequeuing element %d\n", dequeueR());
////    printf("Dequeuing element %d\n", dequeue());
////    printf("Dequeuing element %d\n", dequeue());
    linkedListTraversal(f);
    return 0;
}*/





