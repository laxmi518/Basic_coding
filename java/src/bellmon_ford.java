/**
 * Created by laxmikadariya on 2/15/17.
 */

import java.util.*;
import java.lang.*;
import java.io.*;


class Graph{

    int V,E;

    class Edge{
        int src, dst,wt;
        Edge(){
            src=dst=wt=0;
        }


    }
    Edge edge[];

    Graph(int v,int e)
    {
        V=v;
        E=e;
        edge = new Edge[e];
        for (int i=0;i<e;i++)
        {
            edge[i]=new Edge();
        }


    }

    void BellmanFord(Graph graph,int src)
    {
        int V = graph.V, E = graph.E;
        int dist[] = new int[V];

        // Step 1: Initialize distances from src to all other
        // vertices as INFINITE
        for (int i=0; i<V; ++i)
            dist[i] = Integer.MAX_VALUE;
        dist[src] = 0;

        // Step 2: Relax all edges |V| - 1 times. A simple
        // shortest path from src to any other vertex can
        // have at-most |V| - 1 edges
        for (int i=1; i<V; ++i)
        {
            for (int j=0; j<E; ++j)
            {
                int u = graph.edge[j].src;
                int v = graph.edge[j].dst;
                int weight = graph.edge[j].wt;
                if (dist[u]!=Integer.MAX_VALUE &&
                        dist[u]+weight<dist[v])
                    dist[v]=dist[u]+weight;
            }
        }

       
        for (int j=0; j<E; ++j)
        {
            int u = graph.edge[j].src;
            int v = graph.edge[j].dst;
            int weight = graph.edge[j].wt;
            if (dist[u]!=Integer.MAX_VALUE &&
                    dist[u]+weight<dist[v])
                System.out.println("Graph contains negative weight cycle");
        }
        System.out.println("Vertex   Distance from Source");
        for (int i=0; i<V; ++i)
            System.out.println(i+"\t\t"+dist[i]);
    }


}
public class bellmon_ford {


    public static void main(String[] args) {
        int V = 5;
        int E = 8;
        Graph graph =  new Graph(V,E);



        //add the node for vertex A -B
        graph.edge[0].src=0;
        graph.edge[0].dst = 1;
        graph.edge[0].wt = -1;


        //add the node for vertex A-C
        graph.edge[1].src = 0;
        graph.edge[1].dst = 2;
        graph.edge[1].wt = 4;

        //add the node for vertex B-C
        graph.edge[2].src = 1;
        graph.edge[2].dst = 2;
        graph.edge[2].wt = 3;

        //add the node for vertex B-D
        graph.edge[3].src = 1;
        graph.edge[3].dst = 4;
        graph.edge[3].wt = 2;


        //add the node for vertex  B-E
        graph.edge[4].src = 0;
        graph.edge[4].dst = 1;
        graph.edge[4].wt = -1;


        //add the node for vertex E-D
        graph.edge[5].src = 4;
        graph.edge[5].dst = 3;
        graph.edge[5].wt = -3;


        //add the node for vertex D-B
        graph.edge[6].src = 3;
        graph.edge[6].dst = 1;
        graph.edge[6].wt = 1;


        //add the node for vertex D-C
        graph.edge[7].src = 3;
        graph.edge[7].dst = 2;
        graph.edge[7].wt = 5;

        graph.BellmanFord(graph, 0);



    }
}



