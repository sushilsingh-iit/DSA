#include <iostream>
#include <vector>
#include <list>

class Graph {
    int numVertices;
    std::vector<std::list<int>> adjLists;

public:
    Graph(int vertices) {
        numVertices = vertices;
        adjLists.resize(vertices);
    }

    void addEdge(int src, int dest) {
        adjLists[src].push_back(dest);
        adjLists[dest].push_back(src); // For undirected graph
    }
};