// // graph data structure in the c 

// A Graph is a data structure that consists of the following two components:
// A finite set of vertices also called nodes.
// A finite set of ordered pair of the form (u, v) called as edge. The pair is ordered because (u, v) is not the same as (v, u) in case of a directed graph(digraph). The pair of the form (u, v) indicates that there is an edge from vertex u to vertex v. The edges may contain weight/value/cost.


// Graphs are used to represent many real-life applications:

// Graphs are used to represent networks. 
// The networks may include paths in a city or telephone network or circuit network. For example Google GPS

// Graphs are also used in social networks like linkedIn, Facebook. For example, in Facebook, each person is represented with a vertex(or node). Each node is a structure and contains information like person id, name, gender and locale.


// Directed and Undirected Graphs


// Directed Graphs: 
//The Directed graphs are such graphs in which edges are directed in a single direction. For 

// Undirected Graphs: ⭐⭐⭐

//  Undirected graphs are such graphs in which the edges are directionless or in other words bi-directional. That is, if there is an edge between vertices u and v then it means we can use the edge to go from both u to v and v to u. Following is an example of an undirected graph with 5 vertices:

// Representing Graphs


// Adjacency Matrix. ⭐⭐⭐
// Adjacency List. ⭐⭐⭐


// Let us look at each one of the above two method in details:

// Adjacency Matrix:

// The Adjacency Matrix is a 2D array of size V x V where V is the number of vertices in a graph. Let the 2D array be adj[][], a slot adj[i][j] = 1 indicates that there is an edge from vertex i to vertex j. Adjacency matrix for undirected graph is always symmetric. Adjacency Matrix is also used to represent weighted graphs. If adj[i][j] = w, then there is an edge from vertex i to vertex j with weight w. The adjacency matrix for the above example undirected graph is:Adjacency Matrix RepresentationPros: Representation is easier to implement and follow. Removing an edge takes O(1) time. Queries like whether there is an edge from vertex 'u' to vertex 'v' are efficient and can be done O(1). Cons: Consumes more space O(V^2). Even if the graph is sparse(contains less number of edges), it consumes the same space. Adding a vertex is O(V^2) time. Please see this for a sample Python implementation of adjacency matrix.



// Adjacency List:

// Graph can also be implemented using an array of lists. That is every index of the array will contain a complete list. 

// Size of the array is equal to the number of vertices and every index i in the array will store the list of vertices connected to the vertex numbered i. Let the array be array[]. An entry array[i] represents the list of vertices adjacent to the ith vertex. This representation can also be used to represent a weighted graph.

//  The weights of edges can be represented as lists of pairs. Following is the adjacency list representation of the above example undirected graph.Adjacency List Representation of GraphBelow is the implementation of the adjacency list representation of Graphs: Note: In below implementation, .

// we use dynamic arrays (vector in C++/ArrayList in Java) to represent adjacency lists instead of a linked list. The vector implementation has advantages of cache friendliness.