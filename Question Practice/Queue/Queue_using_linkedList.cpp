#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};

class Queue{
    Node* front;
    Node* back;

    public:
    Queue(){
        this->front=NULL;
        this->back=NULL;
    }

    void push(int data){
        Node* n=new Node(data);
        if(front==NULL){
            front=n;
            back=n;
            return;
        }
        back->next=n;
        back=n;
    }

    void pop(){
        if(front==NULL){
            cout<<"stack is underflow"<<endl;
            return;
        }
        Node* todelete= front;
        front=front->next;
        // todelete->next=NULL;
        delete todelete;
    }

    int peek(){
        if(front==NULL){
            cout<<"no element in stack"<<endl;
            return -1;
        }

        return front->data;
    }

    bool empty(){
        if(front==NULL)return true;
        return false;
    }
};

int main(){
    Queue q;
    q.push(5);
    q.push(10);
    q.push(15);
    cout<<"at peek "<<q.peek()<<endl;
    q.pop();
    cout<<"at peek "<<q.peek()<<endl;
    // q.pop();
    // cout<<"at peek "<<q.peek()<<endl;
    // q.pop();
    // cout<<"at peek "<<q.peek()<<endl;
    // q.pop();
    return 0;
}