#include<stdio.h>
#include<stdlib.h>
struct Array
{
    int *A;
    int size;
    int length;
};
    void display(struct Array arr)
    {
        printf("\nArray Elements:");
        for(int i=0; i<arr.length;i++)
        {
            printf("%d",arr.A[i]);
        }
    }

int main()
{
    struct Array arr;
    int n,i;
    printf("\nEnter Size of Array:");
    scanf("%d",&arr.size);

    arr.A =(int *)malloc(arr.size*(sizeof(int)));
    
    printf("Enter how many elements you want in array:");
    scanf("%d",&n);

    arr.length=0;

    printf("Enter Elements in array:");
    for(i=0; i<n; i++)
    scanf("%d",&arr.A[i]);
    arr.length=n;
    display(arr);

    return 0;
}
