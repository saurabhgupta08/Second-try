#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* right;
    Node* left;

    Node(int data){
        this->data=data;
        this->right=NULL;
        this->left=NULL;
    }
};

Node* buildTree(Node* root){

    cout<<"Enter the data : "<<endl;
    int data;
    cin>>data;
    root = new Node(data);
    if(data==-1) return NULL;

    cout<<"Enter data for inserting in left of "<<data<<endl;
    root->left =buildTree(root->left);
    cout<<"Enter data for inserting in right of "<<data<<endl;
    root->right =buildTree(root->right);

    return root;    
}


bool search(Node* root, int d) {
    if (root == NULL) return false;
    if (root->data == d) return true;
    
    if (d > root->data) {
        return search(root->right, d);
    } else {
        return search(root->left, d);
    }
}


int main(){

    Node* root=NULL;

    //5 3 2 -1 -1 4 -1 -1 8 7 -1 -1 20 -1 -1 
    root = buildTree(root);

    cout<<"Ans is : "<<search(root,20)<<endl;

}