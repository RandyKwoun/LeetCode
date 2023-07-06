class Solution {
    public int climbStairs(int n) {
        if(n == 1)
            return 1;
        
        else if(n == 2)
            return 2;

        else
        {
            int iNum1 = 1;
            int iNum2 = 2;
            int iAns = 0;
            for(int i = 3; i <= n; i++)
            {
                iAns = iNum1 + iNum2;
                iNum1 = iNum2;
                iNum2 = iAns;
            }
            return iAns;
        }
    }
}
