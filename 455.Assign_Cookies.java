class Solution {
    public int findContentChildren(int[] g, int[] s) {
        Arrays.sort(g);
        Arrays.sort(s);
        int iLct = 0;
        int iAns = 0;

        if(s.length == 0)
            return iAns;

        for(int i = 0; i < g.length; i++)
        {
            for(int j = iLct; j < s.length; j++)
            {
                if(g[i] <= s[j])
                {
                    iAns++;
                    iLct = j + 1;
                    break;
                }
            }
            if(iLct == s.length)
                break;
        }

        return iAns;
    }
}
