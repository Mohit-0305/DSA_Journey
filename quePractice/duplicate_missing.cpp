// You have a set of integers s, which originally contains all the numbers from 1 to n. Unfortunately, due to some error, one of the numbers in s got duplicated to another number in the set, which results in repetition of one number and loss of another number.

// You are given an integer array nums representing the data status of this set after the error.

// Find the number that occurs twice and the number that is missing and return them in the form of an array.

 

// Example 1:

// Input: nums = [1,2,2,4]
// Output: [2,3]
// Example 2:

// Input: nums = [1,1]
// Output: [1,2]
 

// Constraints:

// 2 <= nums.length <= 104
// 1 <= nums[i] <= 104

class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n=nums.size();
        int D=0, M=0;
        
        long long sum_actual=0;
        long long sum=((long long)n*(n+1))/2;

        long long SQsum_actual=0;
        long long SQsum=((long long)n*(n+1)*(2*n+1))/6;

        for(int i:nums){
            sum_actual += i;
            SQsum_actual += (long long)i*i;
        }

        long long D_M = sum_actual - sum;
        long long D__M = (SQsum_actual - SQsum)/D_M;
        D = (D_M + D__M)/2;
        M = D__M - D;
        return{D,M};
    }
};

