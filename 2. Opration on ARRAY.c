// 											Opration on Array


/*#include<stdio.h>

void display(int arr[],int n)
{
	int i;
	for( i=0;i<n;i++)//traversal
	{
	printf("%d\n",arr[i]);
	}

}

//code of insertion

int  indinsertion(int arr[],int size,int element,int capacity,int index)
{
	if(size>=capacity){
		return -1;
		
	}
	int i;
	for (i=size-1;i>=index;i-- )
	{
		arr[i+1]=arr[i];
	}
	arr[index]=element;
	return 1;
}


int main ()
{
	int arr[100]={1,5,6,10,56};
	display(arr,5);
	int size=5,element=45,index=3;
	indinsertion(arr,size,element,100,index);
	size+=1;
	printf("After insertion\n");
	display(arr,size);
	
	return 0;	
}*/



//_______________________________________________________________________________
//_______________________________________________________________________________


//								Deletion of Array


//_______________________________________________________________________________
//_______________________________________________________________________________


/*#include<stdio.h>

void display(int arr[],int n)
{
	int i;
	for( i=0;i<n;i++)//traversal
	{
	printf("%d\n",arr[i]);
	}

}

//code of deletion
void inddeletion(int arr[],int size,int index)
{

	int i;
	for (i=index;i<size-1;i++)
	{
		arr[i]=arr[i+1];
	}
	
}


int main ()
{
	int arr[100]={1,5,6,10,56};
	display(arr,5);
	int size=5,index=3;
	inddeletion(arr,size,index);
	size-=1;
	
	printf("After Deletion\n");
	display(arr,size);
	
	return 0;	
}*/





//_______________________________________________________________________________
//_______________________________________________________________________________


//								Linear search and binary search

//_______________________________________________________________________________
//_______________________________________________________________________________
//linear search

/*#include<stdio.h>

int linearsearch(int arr[],int size,int element)
{
	int i;
	for (i=0;i<size;i++)
	{
		if (arr[i]==element)
		{
			return i;
		}
	}
	return -1;
}


int main()
{
	int arr[]={1,23,56,89,41,1,0,23,45,2,3};
	int size=sizeof(arr)/sizeof(int);
	int element;
	printf("Enter the number which you want to search: ");
	scanf("%d",&element);
	int searchindex=linearsearch(arr,size,element);
	printf("The element %d is found at index %d",element,searchindex);
	return 0;
	
}*/



//binary search

/*#include<stdio.h>

int binarysearch(int arr[],int size,int element)
{
	int low =0,mid,high=size-1;
	
	while(low<=high)
	{
		mid=(low+high)/2;
		if(arr[mid]==element)
		{
			return mid;
		}
		if(arr[mid]< element)
		{
			low=mid+1;
		}
		else
		{
			high=mid-1;
		}
	}
	return -1;
}





int main()
{
	int arr[]={1,23,56,89,141,156,200,223,450,622,};
	int size=sizeof(arr)/sizeof(int);
	int element;
	printf("Enter the number which you want to search: ");
	scanf("%d",&element);
	int searchindex=binarysearch(arr,size,element);
	printf("The element %d is found at index %d",element,searchindex);
	return 0;
	
}*/



