#include <iostream>
#include "ListGraph.h"
#include "MatrixGraph.h"

int main() {

   IGraph* lg = new ListGraph();
    lg->AddEdge(1,2);
    lg->AddEdge(2,1);
    lg->AddEdge(2,2);
    lg->AddEdge(2,3);
    lg->AddEdge(1,3);
    lg->AddEdge(1,4);
    int nodeCount = lg->VerticesCount();
    std::cout << nodeCount<<std::endl;
    lg->show_graph();
    lg->show_graph();

    IGraph* mg = new MatrixGraph();
    mg->AddEdge(1,2);
    mg->AddEdge(2,1);
    mg->AddEdge(3,3);
    mg->AddEdge(5,1);
    mg->AddEdge(2,8);
    mg->show_graph();
}
