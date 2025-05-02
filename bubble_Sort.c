#include<stdio.h>
#include<stdbool.h>

void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}


 void bubbleSort(int arr[],int n)
 {
     for(int i=0; i<n-1; i++)
     {
         bool swapped=false;

         for(int j=0; j<n-i-1; j++)
         {
             if(arr[j]>arr[j+1])
             {
                 swap(&arr[j],&arr[j+1]);
                 swapped=true;
             }
         }
         if(swapped==false)
         {
             break;
         }
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

    bubbleSort(arr,n);

    printf("The sorted array: ");
    printArray(arr,n);



    return 0;
}
