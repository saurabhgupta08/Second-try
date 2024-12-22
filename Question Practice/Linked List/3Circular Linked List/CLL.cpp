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
    ~Node(){
        int value=this->data;
        // memory free
        if(this->next!=NULL){
            delete next;
            this->next=NULL;
        }
        cout<<"memory is free"<<endl;
    }
};

// insert
void insertNode(Node* &tail,int ele,int data){
    //if empty list is there
    if(tail==NULL){
        Node* newNode=new Node(data);
        tail=newNode;
        tail->next=tail;
    }
    else{
        //assuming element is present in list
        Node* curr=tail;
        while(curr->data!=ele){
            curr=curr->next;
        }

        Node* newNode=new Node(data);

        newNode->next=curr->next;
        curr->next=newNode;
    }
}

//print linked list
void print(Node* tail){
    //if list is empty
    if(tail==NULL){
        cout<<"list is empty"<<endl;
        return;
    }
    Node* temp=tail;
    cout<<temp->data<<" ";
    temp=temp->next;
    while(temp!=tail){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

//delete node
void deleteNode(Node* &tail,int value){
    if(tail==NULL){
        cout<<"list is empty "<<endl;
        return;
    }
    else{
        Node* prev =tail;
        Node* curr=prev->next;
        while(curr->data!=value){
            prev=curr;
            curr=curr->next;
        }

        //if list have one element
        if(curr==prev){
            tail=NULL;
        }

        //if list have more than one element    
        if(curr==tail){
            tail=prev;
        }
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;

    }
}

int main(){

    Node* tail=NULL;
    insertNode(tail,0,1);
    // insertNode(tail,1,2);
    // insertNode(tail,2,3);
    // insertNode(tail,3,4);
    print(tail);
    cout<<"tail : "<<tail->data<<endl;
    deleteNode(tail,1);
    print(tail);
    cout<<"tail : "<<tail->data<<endl;
    return 0;
}