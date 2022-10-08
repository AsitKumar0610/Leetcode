class Solution {
public:
    bool judgeCircle(string moves) {
        int horizontal = 0;
        int vertical = 0;
        
        for(int i = 0; i < moves.length(); i++)
        {
            switch(moves[i])
            {
                case 'U':
                    vertical++;
                    break;
                case 'D':
                    vertical--;
                    break;
                case 'L':
                    horizontal--;
                    break;
                case 'R':
                    horizontal++;
                    break;
                default:
                    break;
            }
        }
        
        if(horizontal == 0 && vertical == 0) return true;
        
        return false;
    }
};
