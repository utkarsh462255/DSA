int subarraySum(vector<int>& nums, int k) {
       unordered_map<int, int> mp;
        mp[0] = 1;
        int n = nums.size();
        int cnt = 0;
        int prefixSum = 0;
        for(int i=0;i<n;i++) {
            prefixSum += nums[i];
            int toRemove = prefixSum - k;
            cnt += mp[toRemove];
            mp[prefixSum]++;
        }
        return cnt; 
    }