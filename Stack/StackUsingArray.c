
//Stack implementation using array 
#include<stdio.h>
#include<stdlib.h>

// Stack Structure
struct Stack
{
    int size; // size of stack array
    int top;   // Top poiner which will point on top most index
    int *s;
};

// Creation of a stack dynamically
void create(struct Stack *st)
{
    printf("Enter size of array");
    scanf("%d",&st->size);
    st->top = -1;
    st->s= (int*)malloc(st->size*sizeof(int));
}

// Inserting value into a stack
void Push(struct Stack *st, int x)
{
    if(st->top == st->size - 1)
    
        printf("Stack is full");
    else{
        st-> top++;
        st->s[st->top] = x;
    }
}

// Deleting value into a stack
int Pop(struct Stack *st)
{
    int x= -1;
    //Checking whether stack is empty or not
    if(st->top == -1)
    printf("Stack is Empty");
    else{
        x= st->s[st->top--];
       // st->top--;
    }
    return x;
}
// For Searching element at particular index.
 int Peek(struct Stack st,int pos)
 {
     int x= -1;
     // Checking is there any element in stack or not
    if(st.top-pos+1<0)
     printf("invalid position");

    else{
        x= st.s[st.top-pos+1];
        return x;
    }
    return x;
 }

// Return the top most element of a stack
int StackTop(struct Stack st)
{
    if(st.top == -1)
    printf("Stack is Empty");
    else{
        return st.s[st.top];
    }
}

// Checking whether stck is empty or not

int isEmpty(struct Stack st)
{
    if(st.top == -1)
    return 1;
    else
    return 0;   
}

// Checking whether stack is full or not
int isFull(struct Stack st)
{
    if(st.top == st.size - 1)
    return 1;
    else
    {
        return 0;
    }
    
}

// For displaying element into stack or array
void display(struct Stack st)
{
    int i;
    for(i=st.top;i>=0; i--)
    {
        printf("%d",st.s[i]);
        printf("\n");
    }
}
int main()
{
    struct Stack st; // creation of structure stack object/ variable
    create(&st);
    Push(&st,10);
    Pop(&st);
    printf("Serach Element : %d",Peek(st,2));
    printf("\n");
    StackTop(st);
    isEmpty(st);
    isFull(st);
    display(st);

return 0;
}
