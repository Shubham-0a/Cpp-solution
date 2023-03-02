class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // using brutes method
        vector<int> output;
        for(int i=0;i<nums.size()-1;i++)
        {
            for(int j=i+1;j<nums.size();j++){
                if(nums[i] + nums[j] == target){
                    output.push_back(i);
                    output.push_back(j);
                    break;
                }
            }
        }
        
        // Note: This exceeds the time limit
        return output;
    }
};