#include<stdio.h>

void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

int partition(int arr[],int start,int end)
{
    /// Choose the Pivot
    int pivot = arr[end];

    int index=start-1;

    for(int j=start; j<end; j++)
    {
        if(arr[j]<pivot)
        {
            index++;
            swap(&arr[index],&arr[j]);
        }
    }

    swap(&arr[index+1],&arr[end]);
    return index+1;
}

void quickSort(int arr[],int start,int end)
{
    if(start<end)
    {
        int pivotIndex=partition(arr,start,end);

        quickSort(arr,start,pivotIndex-1);
        quickSort(arr,pivotIndex+1,end);
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
    int arr[]={6,5,4,7,3,2,1};

    int n=sizeof(arr)/sizeof(arr[0]);


    printf("The original array: ");
    printArray(arr,n);

    quickSort(arr,0,n-1);

    printf("The sorted array: ");
    printArray(arr,n);



    return 0;
}
