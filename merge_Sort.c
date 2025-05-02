#include<stdio.h>

void merge(int arr[], int left,int mid,int right)
{
    int n1=mid-left+1;
    int n2=right-mid;

    int leftArray[n1],rightArray[n2];

    /// Copy data to temporary left and right arrays

    for(int i=0; i<n1; i++)
    {
        leftArray[i]=arr[left+i];
    }
    for(int i=0; i<n2; i++)
    {
        rightArray[i]=arr[mid+1+i];
    }

    /// Merge the temporary arrays back

    int lft=0,rgt=0, index=left;

    while(lft<n1 && rgt<n2)
    {
        if(leftArray[lft]<=rightArray[rgt])
        {
            arr[index]=leftArray[lft];
            lft++;
        }
        else
        {
            arr[index]=rightArray[rgt];
            rgt++;
        }
        index++;
    }

    /// Copy the remaining elements of left array
    while(lft<n1)
    {
        arr[index]=leftArray[lft];
        index++;
        lft++;
    }


    /// Copy the remaining elements of right array

    while(rgt<n2)
    {
        arr[index]=rightArray[rgt];
        index++;
        rgt++;
    }


}

void mergeSort(int arr[],int start,int end)
{
    if(start<end)
    {
        int mid=start+(end-start)/2;

        mergeSort(arr,start,mid);
        mergeSort(arr,mid+1,end);

        merge(arr,start,mid,end);
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
    int arr[]={10,6,5,4,7,3,2,1};

    int n=sizeof(arr)/sizeof(arr[0]);


    printf("The original array: ");
    printArray(arr,n);

    mergeSort(arr,0,n-1);

    printf("The sorted array: ");
    printArray(arr,n);



    return 0;
}
