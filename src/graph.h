#include <vector>
#include <typeinfo>


namespace GRAPHDEF{


template <typename T>
struct Mod_vec {
    std::vector<std::vector<T>> s;
    bool operator==(const Mod_vec<T>& s_t) {
        if(s_t.s == this->s) return true;
        return false;
    }
    Mod_vec() {};
    Mod_vec(std::vector<std::vector<T>> t) {
        this->s = t;
    }
};

enum Rep_graph{MAP, MATRIX};

// T means weight's type
template <typename T>
struct Graph {
private:
    T m_graph;
    Rep_graph m_type;
public:
    void PrintGraph(Graph<T>& G) {
        ;
    }

    bool operator==(const Graph<T>& G) {
        if(this->m_graph == G.m_graph) return true;
        return false;
    }

    Graph() {}
    Graph(T &G, Rep_graph t = Rep_graph::MATRIX) {
        m_type = t;
        m_graph = G;
    }
    ~Graph(){}
};

}




