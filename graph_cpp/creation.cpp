// here we see the how to create the graph in the cpp 

// preprocessor 
#include<iostream>
#include<vector>
using namespace std;

void addEdge(vector<int> graph[], int u, int v) 
{ 
    graph[u].push_back(v); 
    graph[v].push_back(u); 
}

// print the graph of the elements 
void printGraph(vector<int> grpah[], int v) 
{ 
    for (int i = 0; i < v; i++) 
    { 
        // for each loop 
        for (int x : grpah[i]) 
           cout << x <<" "; 
        cout<<"\n"; 
    } 
}
int main(){
    int v = 4; 
    vector<int> graph[v];

    addEdge(graph, 0, 1); 
    addEdge(graph, 0, 2); 
    addEdge(graph, 1, 2); 
    addEdge(graph, 1, 3); 
    printGraph(graph,v);
    return 0;
}