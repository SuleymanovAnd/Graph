#include "ListGraph.h"

ListGraph::ListGraph(){};
ListGraph::~ListGraph()= default;
ListGraph::ListGraph(const ListGraph &oth){
    listGraph = oth.listGraph;
};
ListGraph& ListGraph::operator = (const ListGraph &oth){
    if (!oth.listGraph.empty()){
        listGraph = oth.listGraph;
    }
};

void ListGraph::connect_nodes (int source_node,int connected_node){
    listGraph[source_node].insert(connected_node);
   // listGraph[connected_node].insert(source_node);  //- для не ориентированного графа

}
void ListGraph::delete_nodes (int source_node, int delete_node){
    listGraph[source_node].erase(delete_node);
   // listGraph[delete_node].erase(source_node);  // - для не ориентированного графа
}

int ListGraph::nodesCount() {

    int count = 0;
    count = listGraph.size();

    std::map<int,std::set <int>>::iterator it;

    for(it = listGraph.begin(); it != listGraph.end(); it++){
        std::set<int> mySet = it->second;
        std::set<int>::iterator iSet;
        for (iSet = mySet.begin(); iSet != mySet.end();iSet++ ){
            if (*iSet > count) {count = *iSet;}
        }
    }

    return count;
}
void ListGraph::show_graph (){

    std::map<int,std::set <int>>::iterator it;


    for (it = listGraph.begin(); it != listGraph.end(); it++){
        std::set<int> mySet = it->second;
        std::set<int>::iterator iSet;
        for (iSet = mySet.begin(); iSet != mySet.end();iSet++ ){
            std::cout << it->first << " - " << *iSet;
            if (iSet  != --mySet.end()) {std::cout << ", ";}
        }
        std::cout << "."<<std::endl;
    }
    std::cout <<std::endl;
}