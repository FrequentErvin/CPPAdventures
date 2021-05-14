#include<bits/stdc++.h>
#define pb push_back
#define ll long long
#define mp make_pair
using namespace std;

int main(){
ios_base::sync_with_stdio(false); cin.tie(NULL);
 int n,l,r;
 cin >> n >> l >> r;
 ll summin = pow(2,l)-1+n-l;
 cout << summin << " ";
 ll summax = 0;
 summax += pow(2,r)-1;
 ll addend = pow(2,r-1);
 for(int i = 0; i < n-r; i++){
     summax += addend;
 }
 cout << summax << endl;
 
}