#include <iostream>
#include <set>
#include <map>
#include "igraph.h"

class ListGraph:public IGraph {
    std::map <int,std::set <int>>listGraph; // номер вершины / и номер смежной вершины.
public:
    ListGraph ();
    ~ ListGraph ();
    ListGraph(const ListGraph &oth);
    ListGraph& operator = (const ListGraph &oth);

    void AddEdge (int source_node,int connected_node) override final ;
    void deleteEdge (int source_node, int delete_node);
    int VerticesCount ()  override final;
    void show_graph () override;
    void GetNextVertices(int vertex, std::vector<int> &vertices) ; // Для конкретной вершины метод выводит в вектор “вершины” все вершины, в которые можно дойти по ребру из данной
    void GetPrevVertices(int vertex, std::vector<int> &vertices) ;

};