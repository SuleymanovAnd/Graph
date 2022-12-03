#include <iostream>
#include <vector>
#include <map>


class ListGraph {
    std::map <int,std::vector <std::pair<int,int>>> listGraph; // номер вершины / и пара (номер смежной вершины, длинна до не).
public:
    ListGraph () {};
    ListGraph(const ListGraph &oth){
        listGraph = oth.listGraph;
    };
    ListGraph& operator = (ListGraph &oth){};

    void connect_nodes (int source_node,int connected_node, const int cost = 1 ){

        std::vector <std::pair<int,int>> nodes;

        if (listGraph[source_node].empty()) {
            std::vector<std::pair<int,int>> adjacent_nodes;
            listGraph[source_node] = adjacent_nodes;  // добавляем в пустой словарь вектор
        }else {nodes =  listGraph[source_node];}

        bool notequal = false;
        for (int i = 0; i <= nodes.size(); i++){

            if (i < nodes.size()){
                if (nodes[i].first != connected_node){
                    notequal = true;
                }
            }else if (listGraph[source_node].empty()){listGraph[source_node].push_back(std::pair<int,int>(connected_node,cost));}
        } if (notequal) {listGraph[source_node].push_back(std::pair<int,int>(connected_node,cost));}

        nodes =  listGraph[connected_node];

       if( listGraph[connected_node].empty()){
           std::vector<std::pair<int,int>> src_node;
           listGraph[connected_node] = src_node;
       }
        notequal = false;
        for (int i =0; i <= nodes.size(); i++){
            if (i < nodes.size()){
                if (nodes[i].first != source_node ){
                    notequal = true;
                }
            }else if (listGraph[connected_node].empty()){ listGraph[connected_node].push_back(std::pair<int,int>(source_node,cost));}
        }if (notequal) {listGraph[connected_node].push_back(std::pair<int,int>(source_node,cost));}

    }
    void show_graph (){

        std::map<int,std::vector <std::pair<int,int>>>::iterator it;


        for (it = listGraph.begin(); it != listGraph.end(); it++){
            std::vector<std::pair<int,int>> myVector = it->second;
            for (int i = 0; i < myVector.size();i++) {
                std::cout << it->first << " - " << myVector[i].first << " (size:" << myVector[i].second << ")";
                if(i != myVector.size()-1) std::cout << ", ";
            }
            std::cout << std::endl;
        }
    }
};