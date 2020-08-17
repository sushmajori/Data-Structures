#include<stdio.h>
#include<stdlib.h>

//Node Defination
struct Node
{
    int data;
    struct Node *next;
};

struct Node *first;

//Creation of Linked list
void create(int A[],int n)
{

    int i;
    struct Node*t ,*last;
    first=(struct Node*)malloc(sizeof(struct Node));
    first->data=A[0];
    first->next=NULL;
    last=first;
    for(i=1;i<n;i++)
    {
        t=(struct Node*)malloc(sizeof(struct Node));
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }

}
//For displayng Link list
void Display(struct Node *p)
{
    while(p!=0)
    {
        printf("\n%d",p->data);
        p=p->next;
    }
}

//Main function
int main()
{
    int A[]={1,2,3,4,5}; //Array initialization
    //calling method/function
    create(A,5);
    Display(first);
    return 0;

}