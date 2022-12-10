#include <unordered_set>
#include <iostream>
#include <map>
#include <vector>
#include "igraph.h"
#include <set>

class MatrixGraph:public IGraph{
   std::vector<std::map <int,int>> matrixGraph;
public:
    MatrixGraph();
    ~MatrixGraph();
    MatrixGraph (const MatrixGraph &oth);
    MatrixGraph& operator = (const MatrixGraph &oth);
    void AddEdge (int source_nodes, int connected_nodes) override final;
    int VerticesCount ()  override final;
    void show_graph () override;
    void GetNextVertices(int vertex, std::vector<int> &vertices)  override ; // Для конкретной вершины метод выводит в вектор “вершины” все вершины, в которые можно дойти по ребру из данной
    void GetPrevVertices(int vertex, std::vector<int> &vertices)  override;
};