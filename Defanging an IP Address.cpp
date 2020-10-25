/* Given a valid (IPv4) IP address, return a defanged version of that IP address.
* A defanged IP address replaces every period "." with "[.]".
*
* Example 1:
* Input: address = "1.1.1.1"
* Output: "1[.]1[.]1[.]1"
*
* Example 2:
* Input: address = "255.100.50.0"
* Output: "255[.]100[.]50[.]0"
*
* Constraints:
* The given address is a valid IPv4 address.
*/

//Time complexity: O(N). Space complexity: O(1).
class Solution {
public:
    string defangIPaddr(string address) {
        string defanged = "";
        
        for(int i = 0; i < address.length(); i++){
            if(address[i] == '.'){
                defanged += "[.]";
            }else{
                defanged += address[i];
            }       
        }        
        return defanged;  
    }
};
