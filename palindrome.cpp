#include<bits/stdc++.h>
using namespace std;
int LCS(string s, string q, int n){ 
    long long ans[n+1][1+n]; 
    for(int i = 0; i <= n; i++) { 
        for(int j = 0; j <= n; j++){ 
        if(i == 0 or j == 0){
            ans[i][j] = 0; 
        }else if(s[i-1] == q[j-1]){
          ans[i][j] = ans[i-1][j-1] + 1; 
        }else{
            ans[i][j] = max(ans[i-1][j], ans[i][j-1]); 
        }
        } 
    } 
    return ans[n][n]; 
} 
int main(){
    int n; 
    cin >> n;
    string s;
    cin >> s;
    string q = "";
    for(int i = n-1; i >= 0; i--){
        q += s[i];
    }
    /*for(int i = 0; i <= (int)q.size()+1; i++){
        cout << q[i] << endl;
    }*/
    cout << n - LCS(s,q,n) << endl;
}
