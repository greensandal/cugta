#include <vector>

struct T_Node
{
    int no;
};

struct T_Edge
{
    int weight;
    int head;
    int tail;
};

struct T_Graph
{
    private:
    std::vector<T_Node> nodes;
    std::vector<T_Edge> edges;
    public:
    void PrintGraph(T_Graph& G);
    bool operator==(const T_Graph& G);
};





