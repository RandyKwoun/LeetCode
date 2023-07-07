class Solution {
    public int balancedStringSplit(String s) {
        int iAns = 0;
        int iNum = (s.charAt(0) == 'R') ? 1 : -1;

        for(int i = 1; i < s.length(); i++)
        {
            if(s.charAt(i) == 'R')
                iNum++;

            else
                iNum--;

            if(iNum == 0)
                iAns++;
        }

        return iAns++;
    }
}
