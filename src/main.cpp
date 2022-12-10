#include <iostream>
#include "ListGraph.h"
#include "MatrixGraph.h"
int main() {
    /*
    ListGraph* lg = new ListGraph();
    lg->connect_nodes(1,2);
    lg->connect_nodes(2,1);
    lg->connect_nodes(2,2);
    lg->connect_nodes(2,3);
    lg->connect_nodes(1,3);
    lg->connect_nodes(1,4);
    int nodeCount = lg->nodesCount();
    lg->show_graph();
    lg->delete_nodes(1,4);
    lg->show_graph();*/

    MatrixGraph* mg = new MatrixGraph();
    mg->connect_nodes(1,2);
    mg->connect_nodes(2,1);
    mg->connect_nodes(3,3);
    mg->connect_nodes(5,1);
    mg->connect_nodes(2,8);
    mg->show_graph();
}
