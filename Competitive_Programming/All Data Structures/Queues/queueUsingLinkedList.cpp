#include<bits/stdc++.h>
using namespace std;

struct node{
int data;
node* next;
node(int x){
    data=x;
    next=NULL;
    }
};

struct Myqueue{
int size;
node* head;
node* front;
node* rear;
Myqueue() {
    front=NULL,rear=NULL,size=0;
    }

    void enqueue(int x){
        node* temp=new node(x);
        if(front==NULL){
            front=rear=temp;
            size++;
            return;
        }
        rear->next=temp;
        rear=temp;
    }

    void dequeue(){
        if(front==NULL){
            return;
        }
        node* temp=front;
        front=front->next;
        size--;
        delete(temp);
    }

    int frontElement(){
        if(front==NULL)
        {
            return -1;
        }
        return front->data;
    }

    int Size()
    {
        return size;
    }

};
int main()
{
    struct Myqueue q1;
    q1.enqueue(5);
    q1.enqueue(6);
    q1.enqueue(9);
    q1.dequeue();
    q1.dequeue();
    // q1.dequeue();
    cout<<q1.frontElement();


    return 0;
}