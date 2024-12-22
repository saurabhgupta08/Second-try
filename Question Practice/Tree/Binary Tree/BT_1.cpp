#include <bits/stdc++.h>
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

//Preorder Traversal
void preorderTra(Node* root){
    if(root==NULL)return;

    cout<<root->data<<" ";
    preorderTra(root->left);
    preorderTra(root->right);
}

//Inorder Traversal
void inorderTra(Node* root){
    if(root==NULL)return;

    inorderTra(root->left);
    cout<<root->data<<" ";
    inorderTra(root->right);
}

//Postorder Traversal
void postorderTra(Node* root){
    if(root==NULL)return ;

    postorderTra(root->left);
    postorderTra(root->right);
    cout<<root->data<<" ";
}

void levelOrderTraversal(Node* root){
    queue<Node*>q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node* tem =q.front();
        q.pop();
        if(tem==NULL){
            //purana level comlete traversal ho chuka hai
            cout<<endl;

            //queue still has child nodes
            if(!q.empty())q.push(NULL);
        }
        else{
            cout<<tem->data<<" ";

            if(tem->left)q.push(tem->left);
            if(tem->right)q.push(tem->right);
        }
    }
}

int main(){
    Node* root= NULL;

  

    // creating a tree
    root = buildTree(root);
    //1 2 4 -1 -1 5 -1 -1 3 -1 6 -1 -1 

    // preorderTra(root);

    // inorderTra(root);

    // postorderTra(root);
    levelOrderTraversal(root);
    
  return 0;
}