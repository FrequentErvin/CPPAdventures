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
    //cout << f << " ";
    q.pop();
	int n = adj[f].size();
    for(int i = 0; i < n; i++){
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
	int fr[k];
	//cout << "Input friend locations: " << endl;
	for(int i = 0; i < k; i++){
		cin >> fr[i];
	}
	adj.resize(n+1);
	//cout << "Input graph: " << endl;
	for(int i = 0; i < n-1; i++){
		int u,v;
			cin>>u>>v;
			adj[u].pb(v);
			adj[v].pb(u);
	}

	for(int i = 1; i < n+1; i++){
		if((int)adj[i].size() == 1){
			leaves.pb(i);
		}
	}
	int numLeaves = (int)leaves.size();
	vector<vector<int> > frlDistance;
	frlDistance.resize(k+1);
	vector<int> vladDistance;
	for(auto j : leaves){
		vladDistance.pb(distLeafFriend(1,j,adj));
	}
	for(int i = 0; i < k; i++){
		for(auto j : leaves){
			frlDistance[i].pb(distLeafFriend(fr[i],j,adj));
		}
	}
	bool globalgood = false;
	
	//beef of the logic
	
	for(int i = 0; i < numLeaves; i++){
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
	
	//end check
	
	if(globalgood) cout << "YES" << endl;
	else cout << "NO" << endl;
  }
  cout << "Anything" << endl;
  //cout << __cplusplus << endl;
}
