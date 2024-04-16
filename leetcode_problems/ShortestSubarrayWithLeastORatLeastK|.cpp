// problem link
// https://leetcode.com/problems/shortest-subarray-with-or-at-least-k-i/description/

class Solution {
public:
    int minimumSubarrayLength(vector<int>& nums, int k) {
        int n = nums.size();
        int min = n, count = 0, val = 0, flag = -1;

        for(int i = 0;i < n;i++){
            count = 0, val = 0;

            for(int j = i;j < n;j++){
                val |= nums[j];
                count++;

                if(val >= k){
                    if(count <= min){
                        min = count;
                        flag = 1;
                    }
                }
            }
        }
        if(flag == -1){
            return -1;
        }else{
            return min;
        }
    }
};
