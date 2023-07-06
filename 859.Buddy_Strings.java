class Solution {
    public boolean buddyStrings(String s, String goal) {
        int iNum = 0;
        int iLct1 = 0, iLct2 = 0;

        if(s.length() != goal.length())
            return false;

        for(int i = 0; i < s.length(); i++)
        {
            if(s.charAt(i) != goal.charAt(i))
            {
                iNum++;
                if(iNum == 1)
                    iLct1 = i;

                else
                    iLct2 = i;
            }
        }

        if(iNum == 2)
        {
            if(Character.compare(s.charAt(iLct1), goal.charAt(iLct2)) == 0 && Character.compare(s.charAt(iLct2), goal.charAt(iLct1)) == 0)
                return true;

            else 
                return false;            
        }

        else if(iNum == 0)
        {
            for(int i = 0; i < s.length(); i++)
            {
                for(int j = 0; j < s.length(); j++)
                {
                    if(s.charAt(i) == s.charAt(j) && i != j)
                        return true;
                }
            }
            return false;
        }

        else
            return false;

    }
}
