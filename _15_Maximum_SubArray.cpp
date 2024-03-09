int maxSubArray(vector<int>& nums) {
        int maxSum = nums[0];
        int Sum = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            Sum = max(nums[i], Sum + nums[i]);
            maxSum = max(maxSum, Sum);
        }

        return maxSum;
    }