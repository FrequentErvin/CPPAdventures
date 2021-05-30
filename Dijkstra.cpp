#include<bits/stdc++.h>
#define pb push_back
#define ll long long
#define mp make_pair
using namespace std;
vector<vector<int> > adj;
int main(){
ios_base::sync_with_stdio(false); cin.tie(NULL);
int v;
cin >> v;
int e;
cin >> e;
adj.resize(v+1);
for(int i = 0; i < e; i++){
    int u,v;
    cin >> u >> v;
    adj[u].pb(v);
    adj[v].pb(u);
}
}