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
	int a,b;
	cin >> a >> b;
	int P = max(a,b);
	int M = min(a,b);
	// m p p p  m p p - ||| m p -- m p -- m p -- m p --
	// mppp mppp mppp mp mp mp mp -njih M 0 ili 1 p da dodijelim
	//popunjavam mp parove sa P dok mogu.
	// P = 17 M = 2
	// mp mp jos 15 programera
	// mppp mppp mppp mp mp mp mp mp    ppppppppp
	// mp mp mp mp mp mp mp  p 
	int answer = 0;
	// answer <= M;
	P = P - M;
	//-----------------------------------------------------------------------------------------------
	if(floor(P/2.0) >= M){
		answer += M;
	}else{
		answer += floor(P/2.0);
		P -= floor(P/2.0); // P= 0 ili 1
		int prM = M - answer;
		int prP = P + M - answer;
		answer += floor(prM/2.0);
	}
	cout << answer << endl;
	}
}	