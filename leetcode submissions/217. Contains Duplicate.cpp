class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        bool output = false;
//     for(int i=0;i<nums.size();i++){
//         int temp = nums[i];
//         for(int j=i+1;j<nums.size();j++){
//             if(nums[j]==temp){
//                 output = true;
//                 break;
//             }
//         }
//         if(output == true){
//             break;
//         }
//     }
//     note: above will exceed the time limit

        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]){
                output = true;
                break;
            }
        }
        return output;
    }
};