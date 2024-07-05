//Qoick sort Algoruthm
//________________________________________________________________________

#include <stdio.h>

void printArray(int *A, int n)
{
	int i;
    for (i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");

}

int partition(int A[], int low, int high)
{
    int pivot = A[low];		//STEP 3rd
    int i = low+1 ;			//STEP 1st 
    int j = high;			//STEP 2nd
    int temp;

    do
    {
        while (A[i] <= pivot)		//STEP 4
        {
            i++;
        }

        while (A[j] > pivot)		//STEP 5
        {
            j--;
        }

        if (i < j)					//STEP 6
        {
            temp = A[i];
            A[i] = A[j];
            A[j] = temp;
        }
    } while (i < j);

    // Swap A[low] and A[j]
    temp = A[low];					//STEP 7
    A[low] = A[j];
    A[j] = temp;
    return j;
}

void quickSort(int A[], int low, int high)
{
    int partitionIndex; // Index of pivot after partition
    if (low < high)
    {
        partitionIndex = partition(A, low, high); 
        
//        printArray(A,9 );
        
		quickSort(A, low, partitionIndex - 1);  // sort left subarray 
        quickSort(A, partitionIndex + 1, high); // sort right subarray
    }
}

int main()
{
//    int A[] = {3, 5, 2, 13, 12, 3, 2, 13, 45};
    int A[] = {1,2,3,9,4,4,8,7,5,6};
//    int A[] = {9, 4, 4, 8, 7, 5, 6};
    // 3, 5, 2, 13, 12, 3, 2, 13, 45
    // 3, 2, 2, 13i, 12, 3j, 5, 13, 45
    // 3, 2, 2, 3j, 12i, 13, 5, 13, 45 --> first call to partition returns 3
    int n = 10;
//    n =7;
    printArray(A, n);
    quickSort(A, 0, n - 1);
    printArray(A, n);
    return 0;
}







//Impotant statement


/*In the quicksort algorithm, every time you get a fresh unsorted subarray, you do a partition on it.
Partition asks you to first choose an element as a pivot. And as already decided,
we would choose the first element of the unsorted subarray as the pivot.
We would need two more index variables, i and j.
Below enlisted is the flow of our partition algorithm we must adhere to. 
We always start from step 1 with each fresh partition call.*/


//1. Define i as the low index, which is the index of the first element of the subarray,
//and j as the high index, which is the index of the last element of the subarray.

//2. Set the pivot as the element at the low index i since that is the first index of the unsorted subarray.

//3. Increase i by 1 until you reach an element greater than the pivot element.

//4. Decrease j by 1 until you reach an element smaller than or equal to the pivot element.

//5. Having fixed the values of i and j, interchange the elements at indices i and j.

//6. Repeat steps 3, 4, and 5 until j becomes less than or equal to i.

//7. Finally, swap the pivot element and the element at the index.

