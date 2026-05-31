/*
Input: nums = [1,2,3,4,5,6,7], k = 3
Output: [5,6,7,1,2,3,4]
Explanation:
rotate 1 steps to the right: [7,1,2,3,4,5,6]
rotate 2 steps to the right: [6,7,1,2,3,4,5]
rotate 3 steps to the right: [5,6,7,1,2,3,4]
*/

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        // int N = nums.size();
        // while(k--){
        //     int temp = nums[N-1];
        //     for(int i=N-1 ; i>0 ; i--){
        //         nums[i] = nums[i-1];
        //     }
        //     nums[0] = temp;
        // }
        int N = nums.size();
        if(N==0) return;
        k = k % N;

        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin() + k);
        reverse(nums.begin() + k, nums.end());

    }
};