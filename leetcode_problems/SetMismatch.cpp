// problem link
// https://leetcode.com/problems/set-mismatch/description/

class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        vector<int> flag(n+1, 0), ans;
        int val, Xor = 0;

        for(int i = 0; i< n;i++){
            int index = nums[i];

            if(flag[index] == 0){
                flag[index] = 1;
            }
            else{
                val = index;
            }

            Xor ^= (index ^ (i+1));
        }

        int mis = (Xor ^ val);

        ans.push_back(val);
        ans.push_back(mis);

        return ans;

    }
};
