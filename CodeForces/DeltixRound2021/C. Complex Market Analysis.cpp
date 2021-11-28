#include<bits/stdc++.h>
#define pb push_back
#define ll long long
#define mp make_pair
using namespace std;
bool isPrime(int n){

    if (n <= 1)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;
    return true;
}
int main(){
ios_base::sync_with_stdio(false); cin.tie(NULL);
 int t;
 cin>>t;
  while(t--){
  	int ans = 0;
	int n,e;
	cin >> n >> e;
	int arr[n];
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}
	map<int,int> isprime;
	for(int i = 0; i < n; i++){
		if(isPrime(arr[i]) == false and arr[i] != 1){
			isprime[i] = 2;
		}else if(arr[i] == 1){
			isprime[i] = 1;
		}else{
			isprime[i] = 0;
		}
	}
	for(int i = n-1; i >= 0; i--){
		int k = 0;
		while(isprime[i-k*e] != 2){
			if(isprime[i-k*e] == 1){
				
			}else{
				
			}
		}
	}

	cout << ans << endl;
  }
}
