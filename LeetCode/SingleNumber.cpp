#include<bits/stdc++.h>
using namespace std;
/*class Solution {
public:*/
    int singleNumber(vector<int>& nums) {
        map<int,int> hash;
        for(int i = 0; i < (int)nums.size(); i++){
            hash[nums[i]]++;
        }
        for(int i = 0; i < (int)nums.size(); i++){
            if(hash[nums[i]] == 1) return nums[i];
        }
        return 0;
    }
//};
int main(){
    vector<int> input;
    int size;
    cin >> size;
    for(int i = 0; i < size; i++){
        int r;
        cin >> r;
        input.push_back(r);
    }
    cout << singleNumber(input);
}