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

//deletion using positon 
void deletePositon(Node* &head,Node* &tail,int position){
    //for starting
    if(position==1){
        Node* temp=head;
        head=head->next;

        temp->next=NULL;
        delete temp;    
        return;
    }
    Node* pretemp=head;
    int count=1;
    while(count<position-1){
        pretemp=pretemp->next;
        count++;
    }
    Node* deltemp=pretemp->next;
    if(deltemp->next==NULL){  //if tail is given
        pretemp->next=NULL;
        tail=pretemp;
        deltemp->next=NULL;
        delete deltemp;
        return;
    }
    pretemp->next=deltemp->next;
    deltemp->next=NULL;
    delete deltemp;
}



int main(){
    Node* node1 =new Node(13);  //head is a pointer node typically
    Node* head=node1;
    Node* tail= node1;

    insertAtTail(tail,14);
    insertAtTail(tail,15);
    insertAtTail(tail,16);

    
    cout<<"tail ka data "<<tail->data<<endl;
    deletePositon(head,tail,4);
     
    print(head);
    cout<<"tail ka data "<<tail->data<<endl;
    return 0;
}