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

Node* constructLL(vector<int>& arr) {
    int n=arr.size();
    Node* head = new Node(arr[n-1]);
        
    for(int i=n-2;i>=0;i--){
        Node* temp =new Node(arr[i]);
        temp->next=head;
        head=temp;
    }
    return head;
}

int main(){

    return 0;
}