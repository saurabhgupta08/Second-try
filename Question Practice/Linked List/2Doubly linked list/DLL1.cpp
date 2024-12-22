#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    //constroctor
    Node(int data){
        this->data=data;
        this->prev=NULL;
        this->next=NULL;
    }

    //destructor
    ~Node(){
        if(next!=NULL){
            delete next;
            next=NULL;
        }
    }
};

void print(Node* &head){
    Node* temp=head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

//insert at head
void insertHead(Node* &head,Node* &tail, int data){
    //if list empty
    if(head==NULL){
        Node* temp= new Node(data);
        head=temp;
        tail=temp;
    }
    else{
        Node* temp=new Node(data);
        temp->next=head;
        head->prev=temp;
        head=temp;
    }
    
}   

//insert at tail
void inserTail(Node* &head,Node* &tail,int data){
    //if list is empty
    if(tail==NULL){
        Node* temp= new Node(data);
        head=temp;
        tail=temp;
    }
    else{
        Node* temp=new Node(data);
        tail->next=temp;
        temp->prev=tail;
        tail=temp;
    }
    
}

//insert anywhere
void insertPosition(Node* &head,Node* &tail,int position,int data){
    Node* nodeAdd=new Node(data);
    
    if(position==1){
        // nodeAdd->next=head;
        // head->prev=nodeAdd;
        // head=nodeAdd;
        insertHead(head,tail,data);
        return;
    }
    Node* nodePre=head;
    int count=1;
    while(count<position-1){
        nodePre=nodePre->next;
        count++;
    }

    //if insert at last
    if(nodePre->next==NULL){
        // tail->next=nodeAdd;
        // nodeAdd->prev=tail;
        // tail=nodeAdd;
        inserTail(head,tail,data);
        return;
    }
    
    nodeAdd->next=nodePre->next;
    nodePre->next=nodeAdd;
    nodeAdd->prev=nodePre;

}

int getLength(Node* &head){
    Node* temp=head;
    int count=1;
    while(temp->next!=NULL){
        temp=temp->next;
        count++;
    }
    return count;
}


// delete node
void deleteNode(Node* &head, Node* &tail,int position){
    if(position==1){
        Node* temp =head;
        head=head->next;
        temp->next=NULL;
        head->prev=NULL;
        delete temp;
        return;
    }

    Node* temp=head;
    int pos=1;
    while(pos<position){
        temp=temp->next;
        pos++;
    }

    if(temp->next==NULL){
        tail=temp->prev;
        temp->prev=NULL;
        tail->next=NULL;
        delete temp;
        return;
    }

    temp->prev->next=temp->next;
    temp->next->prev=temp->prev;
    temp->next=NULL;
    temp->prev=NULL;
    delete temp;
}


int main(){

    // Node* node1=new Node(2);
    Node* tail= NULL;
    Node* head= NULL;
    // insertHead(head,tail,25);
    // insertHead(head,tail,25);
    inserTail(head,tail,3);
    inserTail(head,tail,4);
    inserTail(head,tail,5);
    inserTail(head,tail,6);
    insertPosition(head,tail,1,1);
    insertPosition(head,tail,6,7);
    print(head);
    cout<<"Head: "<<head->data<<endl;
    cout<<"Tail: "<<tail->data<<endl;
    deleteNode(head,tail,6);
    print(head);
    cout<<"Head: "<<head->data<<endl;
    cout<<"Tail: "<<tail->data<<endl;
    cout<<"length: "<<getLength(head)<<endl;

    return 0;
}