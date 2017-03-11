//
//  bellmord_algo.c
//  
//
//  Created by Laxmi Kadariya on 2/15/17.
//
//

#include "bellmord_algo.h"
#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <limits.h>
struct Edge
{
    int src,dst,wt;
    
};

struct Graph
{
    int V,E;
    struct Edge *edge;
    
};

int main()
{
    printf(" this is the first program\n");
    int vertex =5;
    int edge =8;
    struct Graph *graph = (struct Graph *)malloc(sizeof(struct Graph));
    graph->V = vertex;
    graph->E = edge
    graph->edge= (struct Edge*) malloc( graph->E * sizeof( struct Edge ) );
    
    
    //add the node for vertex A
    graph->edge[0]->src = 0;
    graph->edge[0]->dst = 0;
    graph->edge[0
    
    
    
}
