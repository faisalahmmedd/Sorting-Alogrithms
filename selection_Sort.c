#include<stdio.h>
#include<stdbool.h>

void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

void selectionSort(int arr[], int n)
{
    for(int i=0; i<n-1; i++)
    {
        /// Assume the i'th element is the smallest element in the unsorted array

        int min_indx=i;

        for(int j=i+1; j<n; j++)
        {
            if(arr[j]<arr[min_indx])
            {
                min_indx=j;
            }
        }
        swap(&arr[i],&arr[min_indx]);
    }
}


void printArray(int arr[],int size)
{
    for(int i=0; i<size; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[]={6,5,4,3,2,1};

    int n=sizeof(arr)/sizeof(arr[0]);


    printf("The original array: ");
    printArray(arr,n);

    selectionSort(arr,n);

    printf("The sorted array: ");
    printArray(arr,n);



    return 0;
}
