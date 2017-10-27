#include "Graph.h"

Graph::Graph(){
//initialize graph with 0 vertices
}
Graph::Graph(int n){
//initialize graph with n vertices
	this->vertex = n;
	this->array = new AdList[n];
}
void Graph::addEdge(int v, int u){
//add an edge vu to graph
}
struct AdNode* Graph::newAdNode(int v){
//add a new node with vertex index v
}
void Graph::printGraph(){
//print whole graph
}