class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int left = 0, right = 0;
        while(right<nums.size()){
            if(nums[right]!=0){
                swap(nums[left],nums[right]);
                left++;
            }
            right++;
        }
    }
};

// Two Pointer technique
// Left point preservers the last zero found
// Right pointer finda the first non zero element and replaces with left point.