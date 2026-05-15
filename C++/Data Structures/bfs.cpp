#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class BFS{
public:
	vector<vector<int>> createAdjList(int vertices, vector<pair<int, int>> edges) {
    
    	// Initialize list
	    vector<vector<int>> adjList(vertices);

	    // Fill edges
	    for(auto edge : edges) {
	        int u = edge.first;
	        int v = edge.second;

	        adjList[u].push_back(v);
	        adjList[v].push_back(u);   // Remove this line for directed graph
	    }

	    return adjList;
	}

	vector<int> bfsOfGraph(int v, vector<vector<int>> &adjList){

		vector<int> visited(v);
		queue<int> q;

		visited[0] = 1;
		q.push(0);

		vector<int> bfs;

		while(!q.empty()){
			int parent = q.front();
			q.pop();
			for(auto &child : adjList[parent]){
				if(!visited[child]){
					visited[child] = 1;
					q.push(child);
				}
			}
			bfs.push_back(parent);
		}

		return bfs;
	}
};

int main() {

	BFS bfs;

    int vertices = 4;

    vector<pair<int, int>> edges = {
        {0,1},
        {0,2},
        {1,2},
        {2,3}
    };

    vector<vector<int>> list = bfs.createAdjList(vertices, edges);

    vector<int> res = bfs.bfsOfGraph(vertices, list);

    cout<<"BFS Traversal:";
    for(auto &val : res){
    	cout<<val<<" ";
    }

    return 0;
}