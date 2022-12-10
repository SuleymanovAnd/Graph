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
    std::vector<int> vertNext;
    std::vector<int> vertPrev;
    lg->GetNextVertices(1,vertNext);
    lg->GetPrevVertices(2,vertPrev);



    IGraph* mg = new MatrixGraph();
    mg->AddEdge(1,2);
    mg->AddEdge(1,4);
    mg->AddEdge(2,1);
    mg->AddEdge(3,3);
    mg->AddEdge(5,1);
    mg->AddEdge(2,4);
    nodeCount = mg->VerticesCount();
    std::cout << nodeCount<<std::endl;
    vertNext.clear();
    vertPrev.clear();
    mg->GetNextVertices(1,vertNext);
    mg->GetPrevVertices(1,vertPrev);
    mg->show_graph();


}
