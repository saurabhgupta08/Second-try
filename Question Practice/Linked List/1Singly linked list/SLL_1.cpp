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

void insertAtHead(Node* &head,Node* &tail,int data){
    //if list is empty
    if(head==NULL){
        Node* temp=new Node(data);
        head=temp;
        tail=temp;
    }
    else{
        Node* temp=new Node(data); 
        temp->next=head;  
        head=temp;
    }
}
      

void insertAtTail(Node* &head,Node* &tail,int data){
    if(tail==NULL){
        Node* temp=new Node(data);
        head=temp;
        tail=temp;
    }
    else{
        Node* temp=new Node(data);
        tail->next=temp;
        tail=temp;
    }
}

void print(Node* &head){
    Node* temp=head;

    while(temp !=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main(){

    Node* node1 =new Node(13);  //head is a pointer, node typically
    
    Node* tail= node1;
    Node* head=node1;
    // cout<<head->data<<endl;  //to get acces of data of node pointed by pointer head
    // cout<<head->next<<endl;  //to get acces by pointer use "->" 

    // insertAtHead(head,tail,4);
    // insertAtHead(head,tail,5);
    // insertAtHead(head,tail,6);
    insertAtTail(head,tail,14);
    insertAtTail(head,tail,15);
    insertAtTail(head,tail,16);

     
    print(node1);

    return 0;
}