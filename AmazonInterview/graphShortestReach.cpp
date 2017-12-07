/*
 * graphShortestReach.cpp
 *
 *  Created on: Nov 13, 2017
 *      Author: cheyenne
 */
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <queue>
#include <unordered_set>
using namespace std;

class Graph {
public:
	int v;
	vector<int> *adj;

	Graph(int n){
		v = n;
		adj = new vector<int>[n] ;
	}

	void add_edge(int u, int v) {
		adj[u].push_back(v);
		adj[v].push_back(u);
	}

	vector<int> shortest_reach(int start, int n) {
		vector<int> dist(n, -1);
		queue<int> q;
		unordered_set<int> seen;

		q.push(start);
		dist[start] = 0;
		seen.insert(start);
		while(!q.empty()){
			int curr = q.front();
			q.pop();
			for(int node : adj[curr]){
				if(seen.find(node) == seen.end()){
					q.push(node);
					seen.insert(node);
					dist[node] = dist[curr] + 6;
				}
			}
		}

		return dist;
	}

};

int main20() {
	int queries;
	cin >> queries;

	for (int t = 0; t < queries; t++) {

		int n, m;
		cin >> n;
		// Create a graph of size n where each edge weight is 6:
		Graph graph(n);
		cin >> m;
		// read and set edges
		for (int i = 0; i < m; i++) {
			int u, v;
			cin >> u >> v;
			u--, v--;
			// add each edge to the graph
			graph.add_edge(u, v);
		}
		int startId;
		cin >> startId;
		startId--;
		// Find shortest reach from node s
		vector<int> distances = graph.shortest_reach(startId, n);

		for (int i = 0; i < distances.size(); i++) {
			if (i != startId) {
				cout << distances[i] << " ";
			}
		}
		cout << endl;
	}

	return 0;
}



