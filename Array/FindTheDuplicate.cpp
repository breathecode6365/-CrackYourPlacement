// Bruteforce is to iterate through the element and run another loop to check if the same element present again in another index
// O(n**2)

//Using tree map
#include "bits/stdc++.h"
using namespace std;
int findDuplicateMAP(vector<int>& nums) {
    map<int,int> cnt;
    int ans;
    for(int x:nums)
        cnt[x]++;
    for(auto x:cnt)
        if(x.second>=2)
        {
            ans = x.first;
            break;
        }
    return ans;

}

// Using map time complexity = o(n*logn), since map insertion, retrieval takes logn.
// In the question it is clearly mentioned that there exists only one duplicate element, so it is memory waste to store count of all elements
// floyd's Tortoise and hare algorithm
// The concept of slow and fast pointers

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow = nums[0];
        int fast = nums[0];
        do{
            slow = nums[slow];
            fast = nums[nums[fast]];
        }
        while(slow!=fast);
        int slow2 = nums[0];

        while(slow!=slow2){
            slow = nums[slow];
            slow2 = nums[slow2];
        }
        return slow;

    }
};

//Time and space = O(n)