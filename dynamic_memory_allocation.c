#include<stdio.h>
#include<stdlib.h> //For using malloc,calloc,realloc
int main()
{
    //Use of malloc:1)Memory Allocation,2)Initialize with the garbage value
    // int *ptr;
    // int n;
    // printf("Enter the size of Array:");
    // scanf("%d",&n);
    // ptr=(int*)malloc(n*sizeof(int));
    // for(int i=0;i<n;i++)
    // {
    //     printf("Enter the value no %d of this array\n",i);
    //     scanf("%d",&ptr[i]);
    // }
    // for(int i=0;i<n;i++)
    // {
    //     printf("The value no %d of this array is %d\n",i,ptr[i]);
    // }

    //Use of Calloc:1)Continuous Allocation,2)Initialize with the 0 value
    int *ptr;
    int n;
    printf("Enter the size of Array:");
    scanf("%d",&n);
    ptr=(int*)calloc(n,sizeof(int));
    for(int i=0;i<n;i++)
    {
        printf("Enter the value no %d of this array\n",i);
        scanf("%d",&ptr[i]);
    }
    for(int i=0;i<n;i++)
    {
        printf("The value no %d of this array is %d\n",i,ptr[i]);
    }

    // Use of realloc:Used to reallocate the exiting memory used by the array
    printf("Enter the new size of Array:");
    scanf("%d",&n);
    ptr=(int*)realloc(ptr,n*sizeof(int));
    for(int i=0;i<n;i++)
    {
        printf("Enter the new value no %d of this array\n",i);
        scanf("%d",&ptr[i]);
    }
    for(int i=0;i<n;i++)
    {
        printf("The new value no %d of this array is %d\n",i,ptr[i]);
    }

    //Used to free the Memory
    free(ptr);
    return 0;
}