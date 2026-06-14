#include<iostream>
#include<unordered_set>
#include<vector>

using namespace std;

bool isTwoSum(vector<int>& nums, int target){
    unordered_set<int> check;
    for(int n:nums){
        int complement = target - n;
        if(check.find(complement)!=check.end()){
            return true;
        }else{
            check.insert(n);
        }
    }
    return false;
}

int main(){
    vector<int> nums = {1, 7, 11, 15};
    int target = 9;

    cout<<isTwoSum(nums,target)<<endl;

    return 0;
}