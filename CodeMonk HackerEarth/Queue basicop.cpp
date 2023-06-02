#include <bits/stdc++.h>
using namespace std;

void enqueue(int queue[], int element, int& rear, int arraySize)
{
    if(rear==arraySize)
        cout<<"Overflow"<<endl;
    else
    {
        queue[rear]=element;
        rear++;
    }
}

void dequeue(int queue[], int& front, int rear)
{
    if(front==rear)
        cout<<"Underflow"<<endl;
    else
    {
        queue[front]=0;
        front++;
    }
}

int Front(int queue[], int front) {
    return queue[front];
}

int size(int front, int rear) {
    return (rear - front);
}


bool isEmpty(int front, int rear) {
    return (front == rear);
}



int main()
{
    int queue[5];
    int front=0,rear=0;

    enqueue(queue,20,rear,5);
    enqueue(queue,10,rear,5);
    enqueue(queue,30,rear,5);
    enqueue(queue,35,rear,5);
    enqueue(queue,40,rear,5);

   for(int i=0;i<5;i++)
   {
       cout<<queue[i]<<" ";
   }
   cout<<endl;

   dequeue(queue,front,rear);
    dequeue(queue,front,rear);
   int l=size(front,rear);
   cout<<l<<endl;
    for(int i=front;i<l;i++)
   {
       cout<<queue[i]<<" ";
   }




    return 0;
}
