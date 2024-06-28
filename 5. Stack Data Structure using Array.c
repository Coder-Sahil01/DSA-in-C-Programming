//_________________________________________________________________________
//_________________________________________________________________________

//Implimentation of Stack 

//_________________________________________________________________________
//_________________________________________________________________________


/*#include<stdio.h>
#include<stdlib.h>

struct stack
{
	int size;
	int top;
	int * arr;
	
};

int isEmpty(struct stack* ptr)
{
	if (ptr->top == -1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}



int isFull(struct stack* ptr)
{
	if (ptr->top==ptr->size-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}


main()
{
	
	struct stack *s = (struct stack*)malloc(sizeof(struct stack));
	s->size= 20;
	s->top= -1;
	s->arr=(int *) malloc(s->size * sizeof(int));
	
	//pushing element manually
	
	
//	s->arr[0]=7;
//	s->top++;
//	s->arr[1]=6;
//	s->top++;
	
	
	//check if element is empty
	
	if(isEmpty(s))
	{
		printf("The Stack is Empty");
	}
	else
	{
		printf("The Stack is not Empty");
	}
	
	
}*/




//_________________________________________________________________________
//_________________________________________________________________________

// Operation on Stack

//_________________________________________________________________________
//_________________________________________________________________________

//Push(), Pop(), isEmpty() and isFull() Operations in Stack Using an Array

//_________________________________________________________________________


/*#include<stdio.h>
#include<stdlib.h>

struct stack
{
	int size;
	int top;
	int * arr;
	
};

int isEmpty(struct stack* ptr)
{
	if (ptr->top == -1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}



int isFull(struct stack* ptr)
{
	if (ptr->top==ptr->size-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}


void push(struct stack* ptr,int val)
{
	if(isFull(ptr)){
		printf("Stack Overflow !! Cannot push %d in stack\n",val);
	}
	else
	{
		ptr->top++;
		ptr->arr[ptr->top]=val;
	}
}


int pop(struct stack* ptr)
{
	if(isEmpty(ptr)){
		printf("Stack Underflow !! Cannot pop from the stack\n");
	}
	else
	{
		int val=ptr->arr[ptr->top];
		ptr->top--;
		return val;
	}
}


main()
{
	
	struct stack *sp = (struct stack*)malloc(sizeof(struct stack));
	sp->size= 10;
	sp->top= -1;
	sp->arr=(int *) malloc(sp->size * sizeof(int));
	// array created 
	
	//check if element is empty
	
	
//Push 
	
	printf("Before pushing Full: %d\n",isFull(sp));
	printf("Before pushing Empty: %d\n",isEmpty(sp));	
	push(sp,15);
	push(sp,14);
	push(sp,15);
	push(sp,85);
	push(sp,11);
	push(sp,56);
	push(sp,18);
	push(sp,10);
	push(sp,20);
	push(sp,112);//---> Pushed 10 values
//	push(sp,13);//  Stack Overflow since the size of the stack is 10
	printf("After pushing Full: %d\n",isFull(sp));
	printf("After pushing Empty: %d\n",isEmpty(sp));	
	
//pop


	printf("poped %d from the stack\n",pop(sp));
	printf("poped %d from the stack\n",pop(sp));


}*/




//_________________________________________________________________________

//Peek Operation in Stack Using Arrays

//_________________________________________________________________________



/*#include<stdio.h>
#include<stdlib.h>
 
struct stack{
    int size ;
    int top;
    int * arr;
};
 
int isEmpty(struct stack* ptr){
    if(ptr->top == -1){
            return 1;
        }
        else{
            return 0;
        }
}
 
int isFull(struct stack* ptr){
    if(ptr->top == ptr->size - 1){
        return 1;
    }
    else{
        return 0;
    }
}
 
void push(struct stack* ptr, int val){
    if(isFull(ptr)){
        printf("Stack Overflow! Cannot push %d to the stack\n", val);
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}
 
int pop(struct stack* ptr){
    if(isEmpty(ptr)){
        printf("Stack Underflow! Cannot pop from the stack\n");
        return -1;
    }
    else{
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}
 
int peek(struct stack* sp, int i){
    int arrayInd = sp->top -i + 1;
    if(arrayInd < 0){
        printf("Not a valid position for the stack\n");
        return -1;
    }
    else{
        return sp->arr[arrayInd];
    }
}
int main(){
    struct stack *sp = (struct stack *) malloc(sizeof(struct stack));
    sp->size = 50;
    sp->top = -1;
    sp->arr = (int *) malloc(sp->size * sizeof(int));
    printf("Stack has been created successfully\n");
 
    push(sp,1);
    push(sp,23);
    push(sp,99);
    push(sp,75);
    push(sp,3);
    push(sp,64);
    push(sp,57);
    push(sp,46);
    push(sp,89);
    push(sp,6);  
    push(sp,5);  
    push(sp,75);  
       
        // Printing values from the stack
    int j;
    for(j=1; j<=sp->top+1;j++)
    {
        printf("The value at position %d is %d\n", j, peek(sp, j));
    }

    return 0;
}*/





//_________________________________________________________________________

//stackTop, stackBottom

//_________________________________________________________________________


/*#include<stdio.h>
#include<stdlib.h>
 
struct stack{
    int size ;
    int top;
    int * arr;
};
 
int isEmpty(struct stack* ptr){
    if(ptr->top == -1){
            return 1;
        }
        else{
            return 0;
        }
}
 
int isFull(struct stack* ptr){
    if(ptr->top == ptr->size - 1){
        return 1;
    }
    else{
        return 0;
    }
}
 
void push(struct stack* ptr, int val){
    if(isFull(ptr)){
        printf("Stack Overflow! Cannot push %d to the stack\n", val);
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}
 
int pop(struct stack* ptr){
    if(isEmpty(ptr)){
        printf("Stack Underflow! Cannot pop from the stack\n");
        return -1;
    }
    else{
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}
 
int stackTop(struct stack* sp){
    return sp->arr[sp->top];
}
 
int stackBottom(struct stack* sp){
    return sp->arr[0];
} 

int peek(struct stack* sp, int i){
    int arrayInd = sp->top -i + 1;
    if(arrayInd < 0){
        printf("Not a valid position for the stack\n");
        return -1;
    }
    else{
        return sp->arr[arrayInd];
    }
}
int main(){
    struct stack *sp = (struct stack *) malloc(sizeof(struct stack));
    sp->size = 50;
    sp->top = -1;
    sp->arr = (int *) malloc(sp->size * sizeof(int));
    printf("Stack has been created successfully\n");
 
    push(sp,1);
    push(sp,23);
    push(sp,99);
    push(sp,75);
    push(sp,3);
    push(sp,64);
    push(sp,57);
    push(sp,46);
    push(sp,89);
    push(sp,6);  
    push(sp,5);  
    push(sp,75);  
       
    printf("The top most value of this stack is %d\n", stackTop(sp));
    printf("The bottom most value of this stack is %d\n", stackBottom(sp));

    return 0;
}*/






