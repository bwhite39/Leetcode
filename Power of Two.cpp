/* Given an integer n, write a function to determine if it is a power of two.
*
* Example 1:
* Input: n = 1
* Output: true
* Explanation: 20 = 1
* 
* Example 2:
* Input: n = 16
* Output: true
* Explanation: 24 = 16
*
* Example 3:
* Input: n = 3
* Output: false
*
* Example 4:
* Input: n = 4
* Output: true
*
* Example 5:
* Input: n = 5
* Output: false
*
* Constraints:
* pow(-2,31) <= n <= pow(2,31) - 1
*/

//Time complexity: O(N). Space complexity O(1).
class Solution {
public:
    bool isPowerOfTwo(int n) {
        //long instead of an int to deal with the overflow
        long i = 1;
        
        while(i < n){
            i *= 2;
        }     
        if(i == n){
            return true;
        }
        return false;
    }
};
