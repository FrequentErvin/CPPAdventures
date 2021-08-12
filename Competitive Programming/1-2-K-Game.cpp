#include<bits/stdc++.h>
#define pb push_back
#define ll long long
#define mp make_pair
using namespace std;

int main(){
ios_base::sync_with_stdio(false); cin.tie(NULL);
 int t;
 cin>>t;
  while(t--){
      int n,k;
      cin >> n >>k;
     /* bool winpos[n+1];
      winpos[0] = 1;
    for(int i = 1; i < n+1; i++){
        if(winpos[i-1] == 1 or (i-2 >= 0 and winpos[i-2] == 1) or (i-k >= 0 and winpos[i-k])){
            winpos[i] = 0;
        }else{
            winpos[i] = 1;
        }
    }
    /*for(int i = 0; i < n+1; i++){
        cout << winpos[i] << " ";
    }
    cout << endl;*/
    /*if(winpos[n] + 1 == 2){
        cout << "Bob" << endl;
    }else{
        cout << "Alice" << endl;
    }*/
    if(k%3 == 0){
        if(n%(k+1)%3 == 0 and n%(k+1) != k){
            cout << "Bob" << endl;
        }else{
            cout << "Alice" << endl;
        }
    }else{
        if(n%3 == 0){
            cout << "Bob" << endl;
        }else{
            cout << "Alice" << endl;
        }
    }
  }
}