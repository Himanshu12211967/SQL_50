class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        
        if(k <= 0) return 0;
        long long int pro = 1;
        int count = 0;

        int left = 0;
        int right = 0;

        while(right < nums.size()){

            pro *= nums[right];

            while(pro >= k && left <= right){
                pro /= nums[left];
                left++;
            }

            count = count + right - left + 1;
            right++;
        }

        return count;
    }
};