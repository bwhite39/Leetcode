/* Given an array nums of integers, return how many of them contain an even number of digits.
* 
* Example 1:
* Input: nums = [12,345,2,6,7896]
* Output: 2
* Explanation: 
* 12 contains 2 digits (even number of digits). 
* 345 contains 3 digits (odd number of digits). 
* 2 contains 1 digit (odd number of digits). 
* 6 contains 1 digit (odd number of digits). 
* 7896 contains 4 digits (even number of digits). 
* Therefore only 12 and 7896 contain an even number of digits.
*
* Example 2:
* Input: nums = [555,901,482,1771]
* Output: 1 
* Explanation: 
* Only 1771 contains an even number of digits.
*
* Constraints:
* 1 <= nums.length <= 500
* 1 <= nums[i] <= 10^5
*/

//Time complexity: O(N^2). Space Complexity: O(1).
class Solution {
public:
    int findNumbers(vector<int>& nums) {
        string s = "";
        string tmps = "";
        int j, numeven = 0;     
        
        for(int i = 0; i < nums.size(); i++){
            tmps = to_string(nums[i]);
            
            for(j = 0; j < tmps.length(); j++){}
            if(j % 2 == 0){
                numeven += 1;
            }        
        }     
        return numeven;
    }
};
