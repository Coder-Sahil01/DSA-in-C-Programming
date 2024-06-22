#include<stdio.h>
#include<stdlib.h>
struct myarray
{
    int total_size;
    int used_size;
    int *ptr;
};
 
void createarray(struct myarray *a,int tsize,int usize)
{
//	(*a).total_size = tsize;
//	(*a).used_size = usize;
//	int * ptr =(int *)malloc(tsize*sizeof(int));
//	



	a->total_size = tsize;
	a->used_size = usize;
	a->ptr =(int *)malloc(tsize*sizeof(int));

}

void show(struct myarray *a)
{
	int i;
	for(i=0;i< (a->used_size);i++)
	{
		printf("%d\n",(a->ptr)[i]);
		
	}
}



void setval(struct myarray *a)
{
	int n,i;
	for(i=0;i< a->used_size;i++)
	{
		printf("Enter the Element %d  ",i);
		scanf("%d",&n);
		(a->ptr)[i]=n;
		
	}
}

int main()
{
	struct myarray marks;
	createarray(&marks,20,5);
	printf("We are taking input now!!  \n");
	setval(&marks);
	printf("We are give output now!!  \n");
	show(&marks);
	
	return 0;
	
}




