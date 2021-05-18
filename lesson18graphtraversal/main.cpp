#include <iostream>
#include <queue>
#include <vector>

// Adjacency list uses vector instead of linked list for neighbors
struct GraphVertex {
  int value;
  std::vector<GraphVertex *> neighbors;
  bool visited;
};

std::vector<GraphVertex *> MakeGraph() {
  std::vector<GraphVertex *> graph = std::vector<GraphVertex *>();

  GraphVertex *zero = new GraphVertex;
  zero->value = 0;
  GraphVertex *one = new GraphVertex;
  one->value = 1;
  GraphVertex *two = new GraphVertex;
  two->value = 2;
  GraphVertex *three = new GraphVertex;
  three->value = 3;
  GraphVertex *four = new GraphVertex;
  four->value = 4;
  GraphVertex *five = new GraphVertex;
  five->value = 5;
  GraphVertex *six = new GraphVertex;
  six->value = 6;

  zero->neighbors = {two, three};
  one->neighbors = {three};
  two->neighbors = {zero, four, five, six};
  three->neighbors = {zero, one, four};
  four->neighbors = {two, three};
  five->neighbors = {two};
  six->neighbors = {two};

  graph.push_back(zero);
  graph.push_back(one);
  graph.push_back(two);
  graph.push_back(three);
  graph.push_back(four);
  graph.push_back(five);
  graph.push_back(six);

  return graph;
}

void DFSHelper(std::vector<GraphVertex *> graph, GraphVertex *curr) {
  std::cout << curr->value << " ";
  curr->visited = true;
  for (auto neighbor : curr->neighbors) {
    if (!neighbor->visited) {
      DFSHelper(graph, neighbor);
    }
  } 
}

void DFS(std::vector<GraphVertex *> graph, GraphVertex *start) {
  for (int i = 0; i < graph.size(); i++) {
    graph[i]->visited = false;
  }
  DFSHelper(graph, start);
}

void BFS(std::vector<GraphVertex *> graph, GraphVertex *start) {
  for (int i = 0; i < graph.size(); i++) {
    graph[i]->visited = false;
  }

  std::queue<GraphVertex *> queue = std::queue<GraphVertex *>();
  GraphVertex *curr = nullptr;

  std::cout << start->value << " ";
  start->visited = true;
  queue.push(start);
  while (!queue.empty()) {
    curr = queue.front();
    queue.pop();
    for (auto neighbor : curr->neighbors) {
      if (!neighbor->visited) {
        std::cout << neighbor->value << " ";
        neighbor->visited = true;
        queue.push(neighbor);
      }
    }
  }
}

int main() {
  std::vector<GraphVertex *> graph = MakeGraph();

  std::cout << "DFS: ";
  DFS(graph, graph[1]);
  std::cout << std::endl;

  std::cout << "BFS: ";
  BFS(graph, graph[1]);
  std::cout << std::endl;

  std::cout << "DFS: ";
  DFS(graph, graph[0]);
  std::cout << std::endl;

  std::cout << "BFS: ";
  BFS(graph, graph[0]);
  std::cout << std::endl;
}