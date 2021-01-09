#include <iostream>
using namespace std;
// Class Queue
class Queue
{
// Private Access Specifier
private:
    int front;
    int rear;
    int size;
    int *Q;

// Public Access Specifier

public:
    // Default constructor
    Queue()
    {
        front=rear=-1;
        size=10;
        Q=new int[size];
    }
    //Parameterized constructor
    Queue(int size)
    {
        front=rear=-1;
        this->size=size;
        Q=new int[this->size];
    }
// Method declaration    
void enqueue(int x);
int dequeue();
void Display();
};
// Accessing class member function outside of a class using scope resolution operator
void Queue::enqueue(int x)
{
    if(rear==size-1)
    printf("Queue Full\n");
    else
    {
        rear++;
        Q[rear]=x;
    }
}

int Queue::dequeue()
{
    int x=-1;
    if(front==rear)
    printf("Queue is Empty\n");
    else{
        x=Q[front+1];
        front++;
    }
    return x;
}

void Queue::Display()
{
    for(int i=front+1;i<=rear;i++)
    printf("%d ",Q[i]);
    printf("\n");
}
int main()
{
    Queue q(5);
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.dequeue();
    q.Display();
    return 0;
}