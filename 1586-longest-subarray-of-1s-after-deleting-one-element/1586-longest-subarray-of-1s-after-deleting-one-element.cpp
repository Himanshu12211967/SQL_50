class Solution {
public:

    int longestSubarray(vector<int>& nums) {
        
        int left = 0;
        int right = 0;
        int zero = 0;
        int max_len = 0;

        while(right < nums.size()){

            if(nums[right] == 0){
                zero++;
            }

            while(zero > 1){
                if(nums[left] == 0) zero--;
                left++;
            }

            max_len = max(max_len,right-left);
            right++;
        }

        return max_len;
    }
};