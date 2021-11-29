#include<bits/stdc++.h>
#define pb push_back
#define ll long long
#define mp make_pair
using namespace std;
 
int main(){
ios_base::sync_with_stdio(false); cin.tie(NULL);
 int n,q;
 cin >> n >> q;
 string s;
 cin >> s;
 	int ans = 0;
for(int i = 0; i < n-2; i++){
 		if(s[i] == 'a' and s[i+1] == 'b' and s[i+2] == 'c'){
 			ans++;
		 }
	 }
	 
 while(q--){
 	int k;
 	cin >> k;
 	char c;
 	cin >> c;
 	int ansbefore = 0;
 		for(int i = k-3; i < k+2;  i++){
 			if(i >= 0 and i+2 < n){
 				if(s[i] == 'a' and s[i+1] == 'b' and s[i+2] == 'c'){
 					ansbefore++;
				 }
			 }
		 }
		 s[k-1] = c;
		 int ansafter = 0;
		 for(int i = k-3; i < k+2;  i++){
 			if(i >= 0 and i+2 < n){
 				if(s[i] == 'a' and s[i+1] == 'b' and s[i+2] == 'c'){
 					ansafter++;
				 }
			 }
		 }
		 if(ansbefore < ansafter){
		 	ans++;
		 }else if(ansbefore > ansafter){
		 	ans--;
		 }
	 cout << ans << endl;
 }
}