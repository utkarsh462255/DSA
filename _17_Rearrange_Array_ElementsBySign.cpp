vector<int> rearrangeArray(vector<int>& nums) {
        int positive=0,negative=1;
        vector<int> result(nums.size());
        for(int i=0; i<nums.size(); i++){
            if(nums[i]<0){
                result[negative]=nums[i];
                negative+=2;
            }
            else{
                result[positive]=nums[i];
                positive+=2;
            }
        }
        return result;
    }