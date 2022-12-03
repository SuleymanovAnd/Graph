#include <iostream>
#include "ListGraph.h"
int main() {
    ListGraph* lg = new ListGraph();
    lg->connect_nodes(1,2);
    lg->connect_nodes(1,5);
    lg->connect_nodes(1,3);
    lg->connect_nodes(4,1);
    lg->connect_nodes(2,1);
    lg->connect_nodes(2,2);
    lg->show_graph();
}
