/* There is a robot starting at position (0, 0), the origin, on a 2D plane. Given a sequence of its moves, judge if this robot ends up at (0, 0) after it completes its moves.
* The move sequence is represented by a string, and the character moves[i] represents its ith move. Valid moves are R (right), L (left), U (up), and D (down). 
* If the robot returns to the origin after it finishes all of its moves, return true. Otherwise, return false.
*
* Note: The way that the robot is "facing" is irrelevant. "R" will always make the robot move to the right once, "L" will always make it move left, etc. 
* Also, assume that the magnitude of the robot's movement is the same for each move.
*
* Example 1:
* Input: moves = "UD"
* Output: true
* Explanation: The robot moves up once, and then down once. All moves have the same magnitude, so it ended up at the origin where it started. Therefore, we return true.
*
* Example 2:
* Input: moves = "LL"
* Output: false
* Explanation: The robot moves left twice. It ends up two "moves" to the left of the origin. We return false because it is not at the origin at the end of its moves.
*
* Example 3:
* Input: moves = "RRDD"
* Output: false
*
* Example 4:
* Input: moves = "LDRRLRUULR"
* Output: false
* 
* Constraints:
* 1 <= moves.length <= 2 * pow(10,4)
* moves only contains the characters 'U', 'D', 'L' and 'R'.
*/


//Time complexity: O(N). Space complexity: O(1).
class Solution {
public:
    bool judgeCircle(string moves) {
        int row = 0;
        int col = 0;
        
        for(int i = 0; i < moves.length(); i++){
            if(moves[i] == 'U'){
                row += 1;
            }
            if(moves[i] == 'D'){
                row -= 1;
            }
            if(moves[i] == 'L'){
                col -= 1;
            }
            if(moves[i] == 'R'){
                col += 1;
            }
        }
        
        if(row == 0 && col == 0){
            return true;
        }
        return false;
    }
};