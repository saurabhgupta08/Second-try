#include <bits/stdc++.h>
// #include<iostream>
using namespace std;

int n=100;

class Stack{
    int top;
    int* arr;
    
    public:
    Stack(){
        arr = new int[n];
        top=-1;
    }

    void push(int data){
        if(top==n-1){
            cout<<"stack is overflow ."<<endl;
            return;
        }
        top++;
        arr[top]=data;

    }

    void pop(){
        if(top==-1){
            cout<<"No element is to pop"<<endl;
            return;
        }
        top--;
    }

    int Top(){
        if(top==-1){
            cout<<"stack is empty "<<endl;
            return -1;
        }
        return arr[top];
    }

    bool empty(){
        return top==-1;
    }
};

int main(){
    Stack st;
    st.push(5);
    st.push(10);
    cout<<st.Top()<<endl;
    st.pop();
    cout<<st.Top()<<endl;
    st.pop();
    cout<<st.Top()<<endl;

    return 0;
}