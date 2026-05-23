class Solution {
public:
    bool judgeCircle(string moves) {
        vector<int> path(4,0);
        for (char& c : moves){
            if (c == 'U') path[0]++;
            else if (c == 'D') path[1]++;
            else if (c == 'L') path[2]++;
            else path[3]++;
        }


        if (path[0] == path[1] && path[3] == path[2]) return true;

        return false;
    }
};