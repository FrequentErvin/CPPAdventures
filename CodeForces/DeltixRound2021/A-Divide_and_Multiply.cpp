#include<bits/stdc++.h>
#define pb push_back
#define ll long long
#define mp make_pair
using namespace std;
bool isPowerOfTwo(int n)
{
   if(n==0)
   return false;
 
   return (ceil(log2(n)) == floor(log2(n)));
}
int main(){
ios_base::sync_with_stdio(false); cin.tie(NULL);
 int t;
 cin>>t;
  while(t--){
	int n;
	cin >> n;
	long long a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	int twos = 0;
	for(int i = 0; i < n; i++){
		while(a[i] % 2 == 0){
			twos++;
			a[i] /= 2;
		}
	}
	sort(a,a+n);
	for(int i = 0; i < twos; i++){
		a[n-1] *= 2;
	}
	long long sum = 0;
	for(int i = 0; i < n; i++){
		sum += a[i];
	}
  }
}