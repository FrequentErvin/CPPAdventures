#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    //greedy approach:
    int n = s.length();
    map<int,int> hash;
    map<int,int> hash2;
    int ans[n] = {0};
    for(int i = 0; i < s.length(); i++){
        int leftodd=i;
        int rightodd=i;
        while(leftodd >=0 and rightodd <= n-1){
            if(s[leftodd] == s[rightodd]){
                hash[i]++;
            }else{
                break;
            }
            leftodd--;
            rightodd++;
        }
        int lefteven = i;
        int righteven = i+1;
        while(lefteven >= 0 and righteven <= n-1){
            if(s[lefteven] == s[righteven]){
                hash2[i]++;
            }else{
                break;
            }
            lefteven--;
            righteven++;
        }
        ans[i] = max(hash[i], hash2[i]);
    }
    int max = 0;
    for(int i = 0; i < n; i++){
        if(max <= ans[i]){
            max = ans[i];
        }
    }
    vector<int> index;
    for(int i = 0; i < n; i++){
        if(ans[i] == max){
            index.push_back(i);
        }
    }
    //int endsol[(int)index.size()+1];
    //new line, for testing purposes
    set<int> endsol;
    for(int i = 0; i < (int)index.size(); i++){
        int leftodd1 = i, rightodd1 = i;
        int solodd = 0;
        int soleven = 0;
        while(leftodd1 >= 0 and rightodd1 <= n-1){
            if(s[leftodd1] != s[rightodd1]){
                solodd += 2;
            }
            leftodd1--;
            rightodd1++;
        }
        int lefteven2 = i; 
        int rightodd2 = i+1;
        while(lefteven2 >= 0 and righteven2 <= n-1){
            if(s[lefteven2] != s[righteven2]){
                soleven += 2;
            }
            lefteven2--;
            righteven2++;
        }
    endsol.insert(min(solodd, soleven));
    }
    set<int>::iterator itr;
    itr = endsol.begin();
    cout << *itr << endl;
}
