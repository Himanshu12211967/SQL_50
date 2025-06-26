class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        
        int left = 0;
        int right = 0;
        int max_len = 0;
        unordered_map<int,int> freq;

        while(right < nums.size()){

            freq[nums[right]]++;

            if(freq[nums[right]] > k){
                while(nums[left] != nums[right]){
                    freq[nums[left]]--;
                    left++;
                }
                freq[nums[left]]--;
                left++;
            }

            max_len = max(max_len,right-left+1);
            right++;
        }

        return max_len;
    }
};