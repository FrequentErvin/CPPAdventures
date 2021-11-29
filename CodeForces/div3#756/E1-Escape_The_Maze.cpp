#include<bits/stdc++.h>
#define pb push_back
#define pf push_front
#define ll long long
#define mp make_pair
using namespace std;

int distLeafFriend(int fr, int leaf, vector<vector<int> > adj){
	map<int,int> distance;
	map<int,bool> vis;
	queue<int> q;
	q.push(fr);
	vis[fr] = true;
  while (!q.empty()) {
    int f = q.front();
    q.pop();
    for(auto i : adj[f]){
      if (!vis[i]) {
        distance[i] = distance[f] + 1;
        q.push(i);
        vis[i] = true;
      }
    }
  }
	return distance[leaf];
}
int main(){
ios_base::sync_with_stdio(false); cin.tie(NULL);
 int t;
 cin>>t;
  while(t--){
	vector<vector<int> > adj;
	vector<int> leaves;
	int n,k;
	cin >> n;
	cin >> k;
	vector<int> fr;
	for(int i = 0; i < k; i++){
            int r;
            cin >> r;
            fr.pb(r-1);
	}
	adj.resize(n+1);
	for(int i = 0; i < n-1; i++){
		int u,v;
			cin>>u>>v;
			adj[u-1].pb(v-1);
			adj[v-1].pb(u-1);
	}
	for(int i = 0; i < n; i++){
		if((int)adj[i].size() == 1 and i != 0){
			leaves.pb(i);
		}
	}
	vector<vector<int> > frlDistance;
	frlDistance.resize(k+1);
	vector<int> vladDistance;
	for(auto j : leaves){
		vladDistance.pb(distLeafFriend(0,j,adj));
	}
	for(int i = 0; i < k; i++){
		for(auto j : leaves){
			frlDistance[i].pb(distLeafFriend(fr[i],j,adj));
		}
	}
    int sizeLeaf = leaves.size();
	bool globalgood = false;
	for(int i = 0; i < sizeLeaf; i++){
		bool good = true;
		for(int j = 0; j < k; j++){
			if(frlDistance[j][i] < vladDistance[i]){
				good = false;
				break;
			}
		}
		if(good == true){
			globalgood = true;
			break;
		}
	}
	if(globalgood) cout << "YES" << endl;
	else cout << "NO" << endl;
  }
}
