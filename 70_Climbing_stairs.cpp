class Solution {
public:
    int climbStairs(int n) {
        if(n<3) return n;
        int first=1;
        int second=2;
        for(int i=3;i<=n;i++)
        {
            second+=first;
            first=second-first;
        }
        return second;
    }
};