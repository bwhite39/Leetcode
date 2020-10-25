/* You're given strings J representing the types of stones that are jewels, and S representing the stones you have.  
* Each character in S is a type of stone you have. You want to know how many of the stones you have are also jewels.
*
* The letters in J are guaranteed distinct, and all characters in J and S are letters. Letters are case sensitive, so "a" is considered a different type of stone from "A".
*
* Example 1:
* Input: J = "aA", S = "aAAbbbb"
* Output: 3
*
* Example 2:
* Input: J = "z", S = "ZZ"
* Output: 0
*
* Note:
* S and J will consist of letters and have length at most 50.
* The characters in J are distinct.
*/


//Solution 1: Brute force. Time complexity: O(N^2)
class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int count = 0;
        
        for(int i = 0; i < S.length(); i++){
            for(int j = 0; j < J.length(); j++){           
                if(S[i] == J[j]){
                    count += 1;                    
                }
            }
        }
        
        return count;       
    }
};

//Solution 2: Map solution. Time complexity: O(N)
class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int i, count = 0;
        map <char, bool> m;
        
        for(i = 0; i < J.size(); i++){
            m[J[i]] = true;
        }
        for(i = 0; i < S.size(); i++){
            if(m[S[i]] == true){
                count += 1;
            }
        }
        return count;       
    }
};
