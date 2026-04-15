#include <iostream>
#include <vector>
#include <list>

// Simple structure to hold our weights
struct Connection {
    int to;
    int money; // Cost in dollars
    int time;  // Duration in hours
};

class SimpleGraph {
    std::vector<std::list<Connection>> adj;

public:
    SimpleGraph(int nodes) {
        adj.resize(nodes);
    }

    void addEdge(int u, int v, int m, int t) {
        adj[u].push_back({v, m, t});
    }

    void print() {
        for (int i = 0; i < adj.size(); i++) {
            std::cout << "Node " << i << ":\n";
            for (auto const& edge : adj[i]) {
                std::cout << "  -> To " << edge.to 
                          << " (Cost: $" << edge.money 
                          << ", Time: " << edge.time << "h)\n";
            }
        }
    }
};

int main() {
    SimpleGraph g(3); // Create graph with 3 nodes (0, 1, 2)

    // Node 0 to 1: Costs $50, takes 2 hours
    g.addEdge(0, 1, 50, 2);
    
    // Node 1 to 2: Costs $100, takes 5 hours
    g.addEdge(1, 2, 100, 5);

    g.print();
    return 0;
}