#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    //greedy approach:
    int n = s.length();
    map<int,int> hash;
    for(int i = 0; i < s.length(); i++){
        int leftodd=i, rightodd=i;
        while(leftodd >=0 and rightodd <= n-1){
            if(s[leftodd] == s[rightodd]){
                hash[i]++;
            }else{
                break;
            }
            leftodd++;
            rightodd++;
        }
        int lefteven = i, righteven = i;
        while(lefteven >= 0 and rightodd <= n-1){
            if(s[lefteven] == s[righteven]){
                hash[i]++;
            }else{
                break;
            }
            lefteven++;
            righteven++;
        }
    }
}
