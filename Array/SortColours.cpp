// Using Dutch National Flag Algorithm
// Three Way Partioning
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low = 0, mid = 0, high = nums.size()-1,temp;
        while(mid<=high){
            if(nums[mid]==0)
            {
                temp = nums[mid];
                nums[mid] = nums[low];
                nums[low] = temp;
                low++;
                mid++;
            }
            else if(nums[mid]==2){

                temp = nums[mid];
                nums[mid] = nums[high];
                nums[high] = temp;
                high--;
            }
            else{
                mid++;
            }
        }
    }
};

// We can also do Count of 3 different values and fill the array with values according to the count.
// Ex: [1,1,0,2,1] 0s = 1, 1s = 3, 2s = 1
// same array filling from first = [0,1,1,1,2]