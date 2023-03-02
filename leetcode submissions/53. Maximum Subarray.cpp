class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // int output = 0;
        // brute-force method
        // for(int i=0;i<nums.size();i++){
        //     int total_added = 0;
        //     int maximum = 0;
        //     for(int j=i;j<nums.size();j++){
        //         total_added += nums[j];
        //         if(total_added > maximum){
        //             maximum = total_added;
        //         }
        //     }
        //     if(output < maximum){
        //         output = maximum;
        //     }
        // }
        //   Note : above exceeds the time limit

        // kadane theorem
        int current_index_max = nums[0];
        int overall_index_max = nums[0];
        for(int i=1;i<nums.size();i++){
            current_index_max += nums[i];
            if(current_index_max <= nums[i]){
                current_index_max = nums[i];
            }
            if(current_index_max >= overall_index_max){
                overall_index_max = current_index_max;
            }
        }
        int output = overall_index_max;
        return output;
    }
};