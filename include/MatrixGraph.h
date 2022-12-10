#include <unordered_set>
#include <iostream>
#include <map>
#include <vector>


class MatrixGraph {
   std::vector<std::map <int,int>> matrixGraph;
public:
    MatrixGraph();
    ~MatrixGraph();
    MatrixGraph (const MatrixGraph &oth);
    MatrixGraph& operator = (const MatrixGraph &oth);
    void connect_nodes (int source_nodes, int connected_nodes);
    void show_graph ();
};