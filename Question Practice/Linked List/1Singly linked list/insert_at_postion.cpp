#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    //constructor
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};

void insertAtTail(Node* &tail,int data){
    Node* temp=new Node(data);

    tail->next=temp;
    tail=temp;

}

void print(Node* &head){
    Node* temp=head;

    while(temp !=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

void insertAtPosition(Node* &head,Node* &tail,int position,int data){
    //if insert at starting
    if(position==1){
        Node* nodeInsert=new Node(data);
        nodeInsert->next=head;
        head=nodeInsert;
        return;
    }
    Node* temp=head;

    int pos=1;
    while(pos<position-1){
        temp=temp->next;
        pos++;
    }

    //if insert at end
    if(temp->next==NULL){
        //use any pointer in tail and temp
        Node* nodeInsert=new Node(data);
        tail->next=nodeInsert;
        tail=nodeInsert;
        return;

    }

    //if anywhere rather than starting and end
    Node* nodeInsert=new Node(data);
    nodeInsert->next=temp->next;
    temp->next=nodeInsert;

}

int main(){
    Node* node1 =new Node(13);  //head is a pointer node typically
    Node* head=node1;
    Node* tail= node1;

    insertAtTail(tail,14);
    insertAtTail(tail,15);
    insertAtTail(tail,16);

    insertAtPosition(head,tail,5,12);

    cout<<"tail ka data "<<tail->data<<endl;
     
    print(head);
    return 0;
}