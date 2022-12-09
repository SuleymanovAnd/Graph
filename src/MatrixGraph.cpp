#include "MatrixGraph.h"

MatrixGraph::MatrixGraph() {};
MatrixGraph::~MatrixGraph() = default;
MatrixGraph:: MatrixGraph (const MatrixGraph &oth){
    matrixGraph = oth.matrixGraph;
};
MatrixGraph& MatrixGraph::operator = (const MatrixGraph &oth){
    if (!matrixGraph.empty())
    matrixGraph = oth.matrixGraph;
};

void MatrixGraph::connect_nodes (int source_nodes, int connected_nodes){

    std::unordered_set<int>::iterator uIt;
    std::unordered_set<int>mySet;
    uIt = mySet.begin();
    for (int i = 0; i<connected_nodes;i++){
        mySet.emplace_hint(uIt,0);
        uIt++;
    }
    if (matrixGraph[source_nodes].empty()) matrixGraph[source_nodes] = mySet;

    matrixGraph[source_nodes].emplace_hint(uIt);


}
