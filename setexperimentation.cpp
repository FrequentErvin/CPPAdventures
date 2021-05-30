#include<bits/stdc++.h>
#define pb push_back
#define ll long long
#define mp make_pair
using namespace std;

int main(){
ios_base::sync_with_stdio(false); cin.tie(NULL);
 set<int> okay;
 okay.insert(3);
 okay.insert(6);
 okay.insert(8);
 okay.insert(1);
 set<int>::iterator itr;
 for(auto i : okay){
     cout << i << endl;
 }
}