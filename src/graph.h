#include <vector>

namespace GRAPHDEF{

struct Node{
    // The No. of node
    int no;
};

template <typename T>
struct Edge {
    // Edge's weight
    T weight;
    Node head;
    Node tail;
    bool directed;
};

enum Rep_graph{MAP, MATRIX};

// T means weight's type
template <typename T>
struct Graph {
private:
    void* m_graph;
    Rep_graph m_type;
public:
    void PrintGraph(Graph<T>& G) {
        ;
    }
    bool operator==(const Graph<T>& G) {
        return true;
    }
    Graph() {}
    Graph(std::vector<std::vector<T> >, Rep_graph t = Rep_graph::MATRIX) {}
};

}




