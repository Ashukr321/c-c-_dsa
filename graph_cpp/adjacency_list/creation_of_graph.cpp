// here we see the how to create the graph 
#include<iostream>
#include<vector>
using namespace std;

void printGraph(vector<int> adj[], int V) 
{ 
    for (int i = 0; i < V; i++) 
    { 
        for (int x : adj[i]) 
           cout << x <<" "; 
        cout<<"\n"; 
    } 
} 
//create the function to add the edge of the verted 
// add the vertex of the graph by source  to destination 
// add the weight of the edge
void add_Edge(vector<int>adj[],int u,int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
};
// main method start here 
int main(){
    //create a array of vector 
    int V= 4;
    //here v is the vertex of the graph 

    vector<int> adj[V];
    add_Edge(adj,0,1);
    add_Edge(adj,0,2);
    add_Edge(adj,1,2);
    add_Edge(adj,1,3);
    printGraph(adj,V);
    return 0;
}   
