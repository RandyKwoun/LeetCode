class Solution {
    public int[] diStringMatch(String s) {
        int[] Ans = new int[s.length() + 1];
        int iI = 0;
        int iD = s.length();

        for(int i = 0; i < s.length(); i++)
        {
            if(s.charAt(i) == 'I')
            {
                Ans[i] = iI;
                iI++;
            }

            else
            {
                Ans[i] = iD;
                iD--;
            }
        }

        Ans[s.length()] = iD;

        return Ans;
    }
}
