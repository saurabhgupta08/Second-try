#include <bits/stdc++.h>
using namespace std;

class Graph {
    public:
    
    map< int , list <int> > adj;

    void addEdge(int u,int v , bool direction ){
        adj[u].push_back(v);

        if(direction==0){
            adj[v].push_back(u);
        }
    }

    void PrintadjList(){
        for( auto i : adj){
            cout<<i.first<<"->";
            for( auto j: i.second){
                cout<<j<<", ";
            }
            cout<<endl;
        }
    }


};

int main(){
    int n;
    cout<<"Enter the number of nodes "<<endl;
    cin>>n;

    int m;
    cout<<"Enter number of edges "<<endl;
    cin>>m;

    Graph g;
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        g.addEdge(u,v,0);
    }

    g.PrintadjList();

    return 0;
}