#include <bits/stdc++.h>
using namespace std;

class Graph{
    public:
    unordered_map<int,list<int>> adj;
    void addEdge(int u ,int v,bool direction){
        //direction =0 -> undirected
        //direction =1 -> directed

        //created edge from u to v
        adj[u].push_back(v);
        if(direction==0){
            adj[v].push_back(u);
        }
    }

    void printAdjList(){
        for(auto i : adj){
            cout<<i.first<<" ->";
            for(auto j: i.second){
                cout<<j<<",";
            }
            cout<<endl;
        }
    }
};

int main(){
    int n;
    cout<<"Enter the number of edges "<<endl;
    cin>>n;
    Graph graph1;
    for(int i=1;i<=n;i++){
        int u,v;
        cin>>u>>v;
        //creating undirectional graph
        graph1.addEdge(u,v,0);
    }

    //printing graph
    graph1.printAdjList();

    return 0;
}