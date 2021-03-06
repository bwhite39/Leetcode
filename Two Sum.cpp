/* Problem Description:
* Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
* You may assume that each input would have exactly one solution, and you may not use the same element twice.
* You can return the answer in any order.
*
* Example 1:
*
* Input: nums = [2,7,11,15], target = 9
* Output: [0,1]
* Output: Because nums[0] + nums[1] == 9, we return [0, 1].
* Example 2:
*
* Input: nums = [3,2,4], target = 6
* Output: [1,2]
* Example 3:
*
* Input: nums = [3,3], target = 6
* Output: [0,1]
* 
* Constraints:
* 2 <= nums.length <= pow(10,5)
* pow(-10,9) <= nums[i] <= pow(10,9)
* pow(-10,9) <= target <= pow(10,9)
* Only one valid answer exists.
*/

// Brute force solution. Time complexity: O(N^2)
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {       
        vector <int> indices;
        
        for(int i = 0; i < nums.size(); i++){
            for(int j = i + 1; j < nums.size(); j++){
                int comp = target - nums[i];                
                if(nums[j] == comp){
                    indices.push_back(i);
                    indices.push_back(j);
                }
            }
        }
        return indices;
    }
};
