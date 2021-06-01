#include<bits/stdc++.h>
#define pb push_back
using namespace std;
map<int,bool> visited;
vector<vector<int> > adj;
map<int,int> dist;
int globaldist=0;
void bfs(int u){
  queue<int> q;
  q.push(u);
  visited[u] = true;
  while (!q.empty()) {
  	globaldist++;
    int f = q.front();
    cout<<f<<" ";
    q.pop();
    for(int i = 0; i < adj[f].size(); i++){
      if (!visited[i]) {
        dist[i] = dist[f] + 1;
        q.push(i);
        visited[i] = true;
      }
    }
  }
}
int main(){
ios_base::sync_with_stdio(false); cin.tie(NULL);
 int n;
cin>>n;
int m;
cin>>m;
adj.resize(n+1);
for(int i=0;i<m;i++){
	int u,v;
	cin>>u>>v;
	adj[u].pb(v);
	adj[v].pb(u);
}
int x;
cout << "BFS at: " << endl;
bfs(1);
//cout << dist[v_i];
}
