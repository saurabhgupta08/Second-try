#include <bits/stdc++.h>
using namespace std;
int n=100;

class Queue{
    int* arr;
    int front,back;

    public:
    Queue(){
        arr=new int[n];
        front=back=-1;
    }
    void push(int data){
        if(back==n-1){
            cout<<"No space is there"<<endl;
            return ;
        }
        back++;
        arr[back]=data;
        if(front==-1) front++;

    }

    void pop(){
        if(front==-1 || front>back){
            cout<<"No element is there in queue to pop"<<endl;
            return;
        }
        front++;
    }

    int peek(){
        if(front==-1 || front>back){
            cout<<"No element is there in queue"<<endl;
            return -1;
        }
        return arr[front];
    }

    bool empty(){
        if(front==-1 || front>back) return true;
        return false;    
    }

    
};

int main(){
    Queue q;
    q.push(5);
    q.push(8);
    q.push(9);
    q.push(10);

    cout<<"peek at is: "<<q.peek()<<endl;
    q.pop();
    cout<<"peek at is: "<<q.peek()<<endl;
    q.pop();
    cout<<"peek at is: "<<q.peek()<<endl;
    q.pop();
    cout<<"peek at is: "<<q.peek()<<endl;
    q.pop();
    cout<<"peek at is: "<<q.peek()<<endl;
    cout<<q.empty()<<endl;
    q.pop();

    return 0;
}