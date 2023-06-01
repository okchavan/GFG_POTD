class Solution
{
	public:
	//Function to return list containing vertices in Topological order. 
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    // code here
	      vector < int > inDegree(V, 0);
  vector < int > topoOrder;
  queue < int > q;

  // Calculate in-degree of each vertex
  for (int u = 0; u < V; u++) {
    for (int v: adj[u]) {
      inDegree[v]++;
    }
  }

  // Push vertices with in-degree 0 to queue
  for (int u = 0; u < V; u++) {
    if (inDegree[u] == 0) {
      q.push(u);
    }
  }

  // Perform topological sort
  while (!q.empty()) {
    int u = q.front();
    q.pop();
    topoOrder.push_back(u);
    for (int v: adj[u]) {
      inDegree[v]--;
      if (inDegree[v] == 0) {
        q.push(v);
      }
    }
  }

  // Check if all vertices are included in topo sort
  if (topoOrder.size() == V) {
    return topoOrder;
  } else {
    return {}; // Return empty vector if topo sort is invalid
  }
}
	
};