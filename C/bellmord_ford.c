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

void printArr(int dist[], int n)
{
    printf("Vertex   Distance from Source\n");
    for (int i = 0; i < n; ++i)
        printf("%d \t\t %d\n", i, dist[i]);
}

void BellmanFord(struct Graph* graph, int src)
{
    int V = graph->V;
    int E = graph->E;
    int dist[V];
 
    // Step 1: Initialize distances from src to all other vertices
    // as INFINITE
    for (int i = 0; i < V; i++)
        dist[i]   = INT_MAX;
    dist[src] = 0;
 
  
    for (int i = 1; i <= V-1; i++)
    {
        for (int j = 0; j < E; j++)
        {
            int u = graph->edge[j].src;
            int v = graph->edge[j].dst;
            int weight = graph->edge[j].wt;
            if (dist[u] != INT_MAX && dist[u] + weight < dist[v])
                dist[v] = dist[u] + weight;
        }
    }
 
   
    for (int i = 0; i < E; i++)
    {
        int u = graph->edge[i].src;
        int v = graph->edge[i].dst;
        int weight = graph->edge[i].wt;
        if (dist[u] != INT_MAX && dist[u] + weight < dist[v])
            printf("Graph contains negative weight cycle");
    }
 
    printArr(dist, V);
 
    return;
}

int main()
{
   printf(" this is the first program\n");
   int vertex =5;
   int edge =8;
   struct Graph *graph = (struct Graph *)malloc(sizeof(struct Graph));
   graph->V = vertex;
   graph->E = edge;
   graph->edge= (struct Edge*) malloc( graph->E * sizeof( struct Edge ) );


   //add the node for vertex A -B
   graph->edge[0].src = 0;
   graph->edge[0].dst = 1;
   graph->edge[0].wt = -1;


    //add the node for vertex A-C
   graph->edge[1].src = 0;
   graph->edge[1].dst = 2;
   graph->edge[1].wt = 4;
   
      //add the node for vertex B-C
   graph->edge[2].src = 1;
   graph->edge[2].dst = 2;
   graph->edge[2].wt = 3;

      //add the node for vertex B-D
   graph->edge[3].src = 1;
   graph->edge[3].dst = 4;
   graph->edge[3].wt = 2;


      //add the node for vertex  B-E
   graph->edge[4].src = 0;
   graph->edge[4].dst = 1;
   graph->edge[4].wt = -1;


      //add the node for vertex E-D
   graph->edge[5].src = 4;
   graph->edge[5].dst = 3;
   graph->edge[5].wt = -3;


      //add the node for vertex D-B
   graph->edge[6].src = 3;
   graph->edge[6].dst = 1;
   graph->edge[6].wt = 1;


      //add the node for vertex D-C
   graph->edge[7].src = 3;
   graph->edge[7].dst = 2;
   graph->edge[7].wt = 5;  

   BellmanFord(graph, 0);
 
    return 0;



}