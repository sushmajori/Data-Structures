#include<stdio.h>
#include<stdlib.h>
// Node structure
struct Node 
{
    int data;
    struct Node *next;
}*first=NULL;

    void create(int A[],int n)
    {
        int i;

        struct Node *last,*t;
        first =(struct Node*)malloc(sizeof(struct Node));
        first->data=A[0];
        first->next=NULL;
        last=first;
            for(i=1; i<n; i++)
            {
                t =(struct Node*)malloc(sizeof(struct Node));
                t->data=A[i];
                t->next=NULL;
                last->next=t;
                last=t;
            }
    }
    
    // Recursive Display 
    void Rdisplay(struct Node *p)
    {
       
        if(p!=NULL)
        {
            //printf("%d",p->data);
            Rdisplay(p->next);
            printf("%d",p->data);


        }   
    }
    
    // Reversing Element Logic
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

    // Reversing Link using sliding pointer concept
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

    // Reverse link list using Recursion
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
int main()
{
    int A[]={1,2,3,4,5};
    create(A,5);
    count(first); 
    Reverse1(first); 
    //Reverse2(first);
    //Reverse2(first);
    //Rdisplay(first);

    return 0;
}
