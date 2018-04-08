from collections import defaultdict

class Graph:
    def __init__(self):
        self.graph = defaultdict(set)

    def add_links(self,a,b):
        self.graph[a].add(b)

    def get_graph(self):
        return self.graph

    def BFS(self,source,visited):
        queue =[]
        queue.append(source)
        visited[source]=True
        while queue:
            value = queue.pop(0)
            print(value)
            for i in self.graph[value]:
                if(visited[i] == False):
                    queue.append(i)
                    visited[i]=True


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
    g.BFS(2,visited)
