#include "MatrixGraph.h"

MatrixGraph::MatrixGraph() {};
MatrixGraph::~MatrixGraph() = default;
MatrixGraph:: MatrixGraph (const MatrixGraph &oth){
    matrixGraph = oth.matrixGraph;
}
MatrixGraph& MatrixGraph::operator = (const MatrixGraph &oth){
    if (!matrixGraph.empty()){
    matrixGraph = oth.matrixGraph;}
    return *this;
}

void MatrixGraph::AddEdge (int source_nodes, int connected_nodes){
    // увеличиваем вектор до мах номера узла
   if (matrixGraph.size() <source_nodes||matrixGraph.size()<connected_nodes){
       if (matrixGraph.size()<connected_nodes){
           matrixGraph.resize(connected_nodes);
       }else{
           matrixGraph.resize(source_nodes);
       }
   }
 // подготовка переменных для корректной вставки и заполнения
        int tmpSrc = source_nodes;
        int tmpCnct = connected_nodes;
        bool sourceBigger = false;
   if (source_nodes>connected_nodes ) {
       if(!matrixGraph[source_nodes-1].empty()){tmpSrc = connected_nodes; tmpCnct = source_nodes;sourceBigger = true;}
       else {tmpSrc -= 1; tmpCnct = tmpSrc+1;}
       }else if(matrixGraph[connected_nodes-1].empty()){
       tmpSrc = tmpCnct-1;
   }
   if (source_nodes==connected_nodes) {tmpSrc-=1;}


   // вставка и заполнение
    for (int i = 0; i<=tmpSrc;i++){
        // заполнение нулями не свободных мест
        for(int j =0;j<tmpCnct;j++){
            if(matrixGraph[i].find(j) == matrixGraph[i].end()){
                matrixGraph[i].insert(std::make_pair(j,0));}

                    // вставка единицы
              if(!sourceBigger) {
                  if (i == (source_nodes - 1) && j == (connected_nodes - 1)) {
                      auto it = matrixGraph[i].find(j);
                      matrixGraph[i].erase(it);
                      matrixGraph[i].insert(std::make_pair(j, 1));
                  }
              }else {
                  if (i == (connected_nodes - 1) && j == (source_nodes - 1)) {
                      auto it = matrixGraph[j].find(i);
                    if(!matrixGraph[i].empty())  matrixGraph[j].erase(it);
                      matrixGraph[j].insert(std::make_pair(i, 1));
                  }
              }
        }
    }



}

void MatrixGraph::show_graph() {

    for(int i =0;i<matrixGraph.size();i++){


        std::map<int,int> temp = matrixGraph[i];
       auto it = temp.begin();
       if(i==0){
           std::cout << "   ";
           for (it;it!=temp.end();++it){
            std::cout << (it->first)+1<< " ";
           }
            std::cout <<std::endl;
       }
        std::cout << i+1 << "| ";
        for (it = temp.begin();it!=temp.end();++it){
            std::cout << it->second <<" ";
        }
        std::cout <<std::endl;
    }
}

int MatrixGraph:: VerticesCount () {
    int count = 0;
        for (int i = 0; i <matrixGraph.size();i++){

            std::map<int,int> temp = matrixGraph[i];
            auto it = temp.begin();
            if(i!=0){
                for (it = temp.begin();it!=temp.end();++it){
                    if(it->second == 1)  ++count;
                }
            }

        }
        return count;
}

void MatrixGraph:: GetNextVertices(int vertex, std::vector<int> &vertices)  {

} // Для конкретной вершины метод выводит в вектор “вершины” все вершины, в которые можно дойти по ребру из данной
void MatrixGraph::GetPrevVertices(int vertex, std::vector<int> &vertices) {

} ;