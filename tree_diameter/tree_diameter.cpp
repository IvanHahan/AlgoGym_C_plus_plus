//
// Created by Ivan Hahanov on 2/20/19.
//

#include "tree_diameter.h"
#include <set>
#include <iostream>
#include <vector>

struct Vertex {

    int p_index;
    bool p_is_visited;
    std::set<Vertex*> p_neighbors;

    explicit Vertex(int index): p_index(index),
                                p_neighbors (std::set<Vertex*>()),
                                p_is_visited(false) {}

    void connect(Vertex& vertex) {
        p_neighbors.insert(&vertex);
        vertex.p_neighbors.insert(this);
    }

    void disconnect(Vertex& vertex) {
        p_neighbors.erase(&vertex);
        vertex.p_neighbors.erase(this);
    }

    bool operator < (const Vertex& vertex) const {
        return p_index < vertex.p_index;
    }

    int diameter() {
        int fst_distance = 0;
        int snd_distance = 0;
        p_is_visited = true;

        for (auto&& vertex: p_neighbors) {
            if (vertex->p_is_visited) continue;
            int distance = vertex->diameter() + 1;
            if (fst_distance < distance) {
                snd_distance = fst_distance;
                fst_distance = distance;
            }
            else if (snd_distance < distance)
                snd_distance = distance;
        }
        return fst_distance + snd_distance;
    }

    bool is_connected(Vertex& vertex) {
        p_is_visited = true;
        bool is_in = p_neighbors.count(&vertex) > 0;
        if (is_in) return is_in;
        for (auto&& neighbor: p_neighbors) {
            if (neighbor->p_is_visited) continue;
            is_in = neighbor->is_connected(vertex) || is_in;
            if (is_in) return is_in;
        }
        return is_in;
    }

    const std::set<Vertex*> all_vertices() {
        std::set<Vertex*> vertices {};
        p_is_visited = true;
        vertices.insert(this);
        for (auto&& neighbor: p_neighbors) {
            if (neighbor->p_is_visited) continue;
            std::set<Vertex*> all_vertices = neighbor->all_vertices();
            vertices.insert(all_vertices.begin(), all_vertices.end());
        }
        return vertices;
    }

};

void reset_graph(Vertex *graph, int n);

void tree_diameter() {
    std::vector<Vertex> graph {};
    std::vector<std::pair<int, int>> queries{};
    int n, m, q;
    std::cin>>n>>m>>q;
    for (int i = 0; i<n; i++) graph.emplace_back(Vertex(i+1));
    for (int i = 0; i<m; i++) {
        int start, end;
        std::cin>>start>>end;
        graph[start-1].connect(graph[end-1]);
    }
    for (int i=0;i<q;i++) {
        int fst, snd;
        std::cin>>fst>>snd;
        queries.emplace_back(std::pair(fst-1,snd-1));
    }
    for (int i=0;i<q;i++) {
        std::pair<int, int> query = queries[i];
        reset_graph(&graph[0], n);
        if (graph[query.first].is_connected(graph[query.second]))
            std::cout<<-1<<std::endl;
        else {
            reset_graph(&graph[0], n);
            std::set<Vertex*> fst_vertices = graph[query.first].all_vertices();
            std::set<Vertex*> snd_vertices = graph[query.second].all_vertices();
            std::vector<int> diameters{};
            for (auto&& fst: fst_vertices) {
                for (auto&& snd: snd_vertices) {
                    reset_graph(&graph[0], n);
                    fst->connect(*snd);
                    diameters.push_back(fst->diameter());
                    fst->disconnect(*snd);
                }
            }
            int sum_diameter = 0;
            for (auto d: diameters) sum_diameter += d;
            std::cout<<double(sum_diameter)/double(diameters.size())<<std::endl;
        }

    }

}

void reset_graph(Vertex *graph, int n) {
    for (int i=0;i<n;i++) graph[i].p_is_visited = false;
}

