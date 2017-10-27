class Graph
{
	//Adjacent array representation
public:
//list node
 	struct AdNode
 	{
 		int vertex;//adjacent vertex
 		struct AdNode* next;//pointer to next node
 	};
 	//list
 	struct AdList
 	{
 		struct AdNode* head;//point to head of the list
 	};
private:
	int vertex;//vertices
	struct AdList* array;//adjacent list
 public:
 	Graph();
 	Graph(int n);
 	void addEdge(int v, int u);
 	struct AdNode* newAdNode(int v);
 	void printGraph();
}; 