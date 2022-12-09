#include <iostream>
#include <set>
#include <map>


class ListGraph {
    std::map <int,std::set <int>>listGraph; // номер вершины / и номер смежной вершины.
public:
    ListGraph ();
    ~ ListGraph ();
    ListGraph(const ListGraph &oth);
    ListGraph& operator = (const ListGraph &oth);

    void connect_nodes (int source_node,int connected_node);
    void delete_nodes (int source_node, int delete_node);
    int nodesCount ();
    void show_graph ();

};