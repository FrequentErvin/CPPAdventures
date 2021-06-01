#include<bits/stdc++.h>
#define pb push_back
using namespace std;
map<int,bool> visited;
vector<vector<int> > adj;
void bfs(int u){
  queue<int> q;
  q.push(u);
  visited[u] = true;
  while (!q.empty()) {
    int f = q.front();
    cout<<f<<" ";
    q.pop();
    for(int i = 0; i < (int)adj[f].size(); i++){
      if (!visited[i]) {
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
for(int i = 0; i < m; i++){
	int u,v;
	cin>>u>>v;
	adj[u].pb(v);
	adj[v].pb(u);
}
bfs(1);
}
