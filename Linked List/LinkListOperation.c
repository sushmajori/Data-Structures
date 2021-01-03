#include<stdio.h>
#include<stdlib.h>

//Node Representation
struct Node 
{
    int data;
    struct Node *next;
}*first=NULL;

    //creation of link list
    void create(int A[],int n)
    {
        int i;

        struct Node *last,*t;
        // Creation of a Head Node
        first =(struct Node*)malloc(sizeof(struct Node));
        first->data=A[0];
        first->next=NULL;
        last=first;
            // Creation of a link list ( other node which is connected to head node)
            for(i=1; i<n; i++)
            {
                t =(struct Node*)malloc(sizeof(struct Node));
                t->data=A[i];
                t->next=NULL;
                last->next=t;
                last=t;
            }
    }

    // Recursive Function for counting number of Nodes in a link list
    int Recursivecount(struct Node *p)
    {
        if(p!=NULL)
        {
            return Recursivecount(p->next)+1;
        }
        else
        {
            return 0;
        }
        
    }

    // Iterative Function for counting number of Nodes in a link list
    int count(struct Node *p)
    {
        int count = 0;
        while(p!=0)
        {
            count++;
            p=p->next;
        }
        return count;
        
    }

    // Iterative Function for Addition of Nodes in a link lis
    int Add(struct Node *p)
    {
        int sum=0;
        while(p!=NULL)
        {
            sum = sum + p->data;
            p=p->next;
            
        }
        return sum;
    }

    // Recursive Function for Addition of Nodes in a link list
    int RecursiveAdd(struct Node *p)
    {
        if(p!=NULL)
        {
            return RecursiveAdd(p->next)+ p->data;            
        }
        else 
        {
            return 0;
        }
    }

    // Reversing Link List using reversing element
    void Reverse1(struct Node *p)
    {
        int *A,i = 0;
        struct Node *q = p;
        A = (int*)malloc(sizeof(int)* count(p));
        while(q!=NULL)
        {
            A[i]= q->data;
            q = q->next;
            i++;
        }
       q = p;
       i--;
        while(q!= NULL)
        {
            q->data = A[i--];
            q = q->next;
        }
    }
    // Reversing Link List using sliding concept method

    void Reverse2(struct Node *p)
    {
        struct Node *q = NULL,*r = NULL;
        while(p!= NULL)
        {
            r = q;
            q = p;
            p = p ->next;  
            q ->next = r;        
        }
        first = q;      
    }

        // Reversing Link List using Recursion 
    void Reverse3(struct Node *q,struct Node *p)
    {

        if(p!= NULL)
        {
            Reverse3(p,p->next);
            p->next = q;
        }
        else
        {
            p = q;
        }
        
    }
    // Function for displaying Nodes in a link list
    void display(struct Node *p)
    {
        printf("Elements in a link list:");
        while(p!=NULL)
        {
            printf("\n %d",p->data);
            p=p->next;

         }
    }
        
    //Recursive Function for displaying Nodes in a link list    
    void Recursivedisplay(struct Node *p)
    {
        if(p!=NULL)
        {   
            printf(" \n%d",p->data);
            Recursivedisplay(p->next);

        }
        
    }

// Main Function
int main()
{  
    // Array Declaration
    int A[]={1,2,3,4,5};
    create(A,5); // Calling Create function
   // printf("count: %d \n",Recursivecount(first)); // Calling to Recursive count function
    printf("count1: %d \n",count(first)); // Calling to count function
   // printf("Sum1: %d \n",RecursiveAdd(first)); // Calling to Recursive Add function
    //printf("Sum: %d \n",Add(first)); // Calling to Add function
    // Reverse1(first); 
    //Reverse2(first);
    Reverse2(first);
    display(first); // Calling to Display function
    //Recursivedisplay(first); // Calling to Recursive Display function

    return 0;
}
