#include <unordered_set>
#include <iostream>
#include <map>


class MatrixGraph {
    std::map <int,std::unordered_set<int>> matrixGraph;
public:
    MatrixGraph();
    ~MatrixGraph();
    MatrixGraph (const MatrixGraph &oth);
    MatrixGraph& operator = (const MatrixGraph &oth);
    void connect_nodes (int source_nodes, int connected_nodes);

};