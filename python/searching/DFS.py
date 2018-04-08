from collections import defaultdict

class Graph:
    def __init__(self):
        self.graph = defaultdict(set)

    def add_links(self,a,b):
        self.graph[a].add(b)

    def get_graph(self):
        return self.graph

    def DFS(self,source,visited):
        visited[source]=True
        print(source)
        for i in self.graph[source]:
            if(visited[i]==False):
                self.DFS(i,visited)


if __name__ == '__main__':
    g=Graph()
    g.add_links(0,1)
    g.add_links(0,2)
    g.add_links(1,2)
    g.add_links(2,3)
    g.add_links(3,3)
    g.add_links(2,0)
    value = g.get_graph()
    print (value)
    visited = [False]*len(value)
    g.DFS(2,visited)


