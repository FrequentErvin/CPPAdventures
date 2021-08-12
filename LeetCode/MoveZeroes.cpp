#include<bits/stdc++.h>
using namespace std;
void moveZeroes(vector<int>& nums) {
        int br = 0;
        for(int i = 0; i < (int)nums.size(); i++){
            if(nums[i] != 0){
                nums[br] = nums[i];
                br++;
            }
        }
        for(int i = br; i < (int)nums.size(); i++){
            nums[i] = 0;
        }
    }
int main(){
    int n;
    cin >> n;
    vector<int> num;
    for(int i = 0; i < n; i++){
        int r;
        cin >> r;
        num.push_back(r);
    }
    moveZeroes(num);
    for(int i = 0; i < n; i++){
        cout << num[i] << endl;
    }
}