#include<stdio.h>


void insertionSort(int arr[],int n)
{
    for(int i=1; i<n; i++)
    {
        int curr=arr[i];

        int prev=i-1;

        while(prev>=0 && arr[prev]>curr)
        {
            arr[prev+1]=arr[prev];
            prev--;
        }
        arr[prev+1]=curr;
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

    insertionSort(arr,n);

    printf("The sorted array: ");
    printArray(arr,n);



    return 0;
}
