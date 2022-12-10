#include <iostream>
#include <vector>
#pragma once
class IGraph {
public:
    virtual ~IGraph() {}
    IGraph() {};
    IGraph(IGraph *_oth) {};
    virtual void AddEdge(int source_node, int connected_node) = 0; // Метод принимает вершины начала и конца ребра и добавляет ребро
    virtual int VerticesCount()  = 0; // Метод должен считать текущее количество вершин
    virtual void show_graph () = 0;
    virtual void GetNextVertices(int vertex, std::vector<int> &vertices) = 0; // Для конкретной вершины метод выводит в вектор “вершины” все вершины, в которые можно дойти по ребру из данной
    virtual void GetPrevVertices(int vertex, std::vector<int> &vertices) = 0; // Для конкретной вершины метод выводит в вектор “вершины” все вершины, из которых можно дойти по ребру в данную

};