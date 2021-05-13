#include<bits/stdc++.h>
using namespace std;
int LCS(string s, string q, int m, int n){ 
    int ans[m+1][1+n]; 
    for(int i = 0; i <= m; i++) { 
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
    return ans[m][n]; 
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
    /*for(int i = 0; i < (int)q.size(); i++){
        cout << q[i] << endl;
    }*/
    cout << n - LCS(s,q,n,n) << endl;
}
