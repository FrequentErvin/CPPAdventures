#include<bits/stdc++.h>
#define pb push_back
#define ll long long
#define mp make_pair
using namespace std;

int main(){
ios_base::sync_with_stdio(false); cin.tie(NULL);
 int n;
 cin >> n;
 int a[n+10];
 cin >> a[0];
 for(int i = 0; i < n; i++){
     a[i+1] = a[i] + floor(sqrt(a[i]*1.00));
     cout <<"Low bound square: " << floor(sqrt(a[i+1]*1.00)) << endl;
     cout << "current r: " << a[i+1] - floor(sqrt(a[i+1]*1.00)) << endl;
 }
}