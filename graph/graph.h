#ifndef GRAPH_GRAPH_H
#define GRAPH_GRAPH_H

#define NAME_LENGTH 20

#define FIND 1
#define NOT_FIND 0

typedef struct Graph_Edge {
    int weight;
    int adj;
    struct Graph_Edge *next;
} Graph_Edge;

typedef struct {
    char *name;
    Graph_Edge *first;
} Graph_Node;

typedef struct {
    Graph_Node *node;
    int size;
} Graph;

Graph *get_Graph(const int length);

#endif
