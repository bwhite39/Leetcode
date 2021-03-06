/* Given a string, find the first non-repeating character in it and return its index. If it doesn't exist, return -1.
*
* Examples:
* s = "leetcode"
* return 0.
*
* s = "loveleetcode"
* return 2.
*
* Note: You may assume the string contains only lowercase English letters.
*/

//Time complexity: O(N). Space complexity: O(N).
class Solution {
public:
    int firstUniqChar(string s) {
        map <char, int> m;
        
        for(int i = 0; i < s.length(); i++){
            m[s[i]] += 1;
        }        
        for(int i = 0; i < s.length(); i++){
            if(m[s[i]] == 1){
                return i;
            }
        }       
        return -1;
    }
};
