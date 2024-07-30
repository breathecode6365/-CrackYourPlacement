int removeDuplicates(int* nums, int numsSize) {
    int i = 1,j=1;
    while(j<numsSize){
        if(nums[j]!=nums[i-1]){
            nums[i++] = nums[j];
        }
        j++;
    }
    return i;
}
//Two Pointers Technique
// i -> Locates the position where unique element should be placed,
// j -> finds unique element with condition num[j]!=num[i-1]