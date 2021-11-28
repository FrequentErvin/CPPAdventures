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
	int n;
	cin >> n;
	if(n % 2 == 0){
		cout << 0 << endl;
	}else{
		vector<int> digits;
			int tmp = n;
			int br = 0;
			while(tmp > 0){
				digits.pb(tmp % 10);
				tmp /= 10;
				br++;
			}
			if(digits[br - 1] % 2  == 0){
				cout << 1 << endl;
			}else{
				bool imalga = false;
				for(int i = 0; i < br; i++){
					if(digits[i] % 2 == 0){
						imalga = true;
					}
				}
				if(imalga == true){
					cout << 2 << endl;
				}else{
					cout << -1 << endl;
				}
			}
	}
  } 
}