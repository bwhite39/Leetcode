/* Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.
* Follow up: Could you implement a solution with a linear runtime complexity and without using extra memory?
*
* Example 1:
* Input: nums = [2,2,1]
* Output: 1
*
* Example 2:
* Input: nums = [4,1,2,1,2]
* Output: 4
*
* Example 3:
* Input: nums = [1]
* Output: 1
*
* Constraints:
* 1 <= nums.length <= 3 * pow(10,4)
* -3 * pow(10,4) <= nums[i] <= 3 * pow(10,4)
* Each element in the array appears twice except for one element which appears only once.
*/

//Solution 1: Map approach
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map <int, int> m;
        for(int i = 0; i < nums.size(); i++){
            m[nums[i]] += 1;
        }
        
        for(int i = 0; i < nums.size(); i++){
            if(m[nums[i]] == 1){
                return nums[i];
            }
        }
        return 0;
    }
};

/* Solution 2: Bit manipulation
* Explanation: XORing any number with itslef will equal zero.
* Ex. 2 ^ 2 = 0, 2 ^ 2 ^ 4 ^ 4 = 0. 
* XORing a 0 and some bit will just return the bit.
* Ex. 2 ^ 2 ^ 5 = 5
/*
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result = 0;
        for(int i = 0; i < nums.size(); i++){
            result ^= nums[i];
        }
        return result;
    }
};
