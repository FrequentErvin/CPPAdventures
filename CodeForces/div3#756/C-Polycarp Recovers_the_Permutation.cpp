#include<bits/stdc++.h>
#define pb push_back
#define ll long long
#define mp make_pair
using namespace std;
void showdq(deque <int> g)
{
    deque <int> :: iterator it;
    for (it = g.begin(); it != g.end(); ++it)
        cout << *it << " ";
}
int main(){
ios_base::sync_with_stdio(false); cin.tie(NULL);
 int t;
 cin>>t;
  while(t--){
	int n;
	cin >> n;
	int a[n];
	deque <int> A;
	for(int i = 0; i < n; i++){
		cin >> a[i];
		A.pb(a[i]);
	}
	deque <int> ans;
	int lijevo = A.front();
		int desno = A.back();
	if(desno != A.size() and lijevo != A.size()){
			cout << -1 << endl;
		}else{
			while(true){
		int lijevo = A.front();
		int desno = A.back();
		
		if(lijevo > desno){
			ans.push_front(lijevo);
			A.pop_front();
		}else{
			ans.push_back(desno);
			A.pop_back();
		}
		if(A.empty() == true) break;
	}
	showdq(ans);
	cout << endl;
		}
	
	
	// 6 4 2 1 3 5
	// ans.pb(veci od coskova)
	// 
	//  p: 3 1 4 2 <--- a: 1 3 2 4 <--- a: 4 1 3 2
	// p: 6 3 4 1 2 5  --> a:  6 5 2 1 4 3 ili a: 5 2 1 4 3 6
	// p: 4 6 5 3 1 2  --> a:  4 2 1 3 5 
	// p: 4
	// a: 6 4 2 1 3 5
	// i: 0 1 2 3 4 5
	// max 3.max     4.max  2.max
	// 6      4         2    1      3        5
	//     2 4 6 5 3  1      1 2    4 6 5 3
	//         2 1 				2 1 
	// p : 4 2 3 1
	// a:       1 3 2 4
	// p: 2 4 5 3 1   a:    4 2 1 3
	
	
  }
}