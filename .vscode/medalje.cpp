#include<bits/stdc++.h>
using namespace std;
bool player = 0;

int dp0(int pozicija, int preostalo){
    if(preostalo <= 3){
        return;
    }else{
       return max(dp1[pozicija]+niz[pozicija],dp1[pozicija+1]+niz[pozicija]+niz[pozicija+1],dp1[pozicija+2]+niz[pozicija]+niz[pozicija+1]+niz[pozicija+2])
    }
}
int dp1(int pozicija, int preostalo){
    if(preostalo <= 3){
        return;
    }else{
       return max(dp0[pozicija]+niz[pozicija],dp0[pozicija+1]+niz[pozicija]+niz[pozicija+1],dp0[pozicija+2]+niz[pozicija]+niz[pozicija+1]+niz[pozicija+2])
    }
}
int main(){
    int n;
    cin >> n;
    vector<int> niz;
    for(int i = 0; i < n; i++){
        int u;
        cin >> u;
        niz.push_back(u);
    }
}