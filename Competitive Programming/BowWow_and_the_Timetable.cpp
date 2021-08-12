#include<bits/stdc++.h>
#define pb push_back
#define ll long long
#define mp make_pair
using namespace std;

int main(){
ios_base::sync_with_stdio(false); cin.tie(NULL);
 string s;
 cin >> s;
 int bro1 = 0;
 for(int i = 0; i<= s.length(); i++){
     if(s[i] == '1'){
         bro1++;
     }
 }
 if(s == "0"){
     cout << 0 << endl;
 }else{
     if(bro1 == 1){
         cout << ceil((s.length()-1)/2.00) << endl;
     }else{
         cout << ceil((s.length())/2.00) << endl;
     }
 }
}