class Solution {
    public int romanToInt(String s) {
        int iNum = 0;
        int i = 0;

        while(i < s.length() - 1)
        {
            if(s.charAt(i) == 'I')
            {
                if(s.charAt(i + 1) == 'V')
                {
                    iNum += 4;
                    i++;
                }

                else if(s.charAt(i + 1) == 'X')
                {
                    iNum += 9;
                    i++;
                }

                else
                    iNum += 1;
            }

            else if(s.charAt(i) == 'V')
                iNum += 5;

            else if(s.charAt(i) == 'X')
            {
                if(s.charAt(i + 1) == 'L')
                {
                    iNum += 40;
                    i++;
                }

                else if(s.charAt(i + 1) == 'C')
                {
                    iNum += 90;
                    i++;
                }

                else
                    iNum += 10;
            }

            else if(s.charAt(i) == 'L')
                iNum += 50;

            else if(s.charAt(i) == 'C')
            {
                if(s.charAt(i + 1) == 'D')
                {
                    iNum += 400;
                    i++;
                }

                else if(s.charAt(i + 1) == 'M')
                {
                    iNum += 900;
                    i++;
                }

                else
                    iNum += 100;
            }

            else if(s.charAt(i) == 'D')
                iNum += 500;
            
            else
                iNum += 1000;

            i++;
        }

        if(i == (s.length() - 1))
        {
            if(s.charAt(i) == 'I')
                iNum += 1;

            else if(s.charAt(i) == 'V')
                iNum += 5;

            else if(s.charAt(i) == 'X')
                iNum += 10;

            else if(s.charAt(i) == 'L')
                iNum += 50;

            else if(s.charAt(i) == 'C')
                iNum += 100;

            else if(s.charAt(i) == 'D')
                iNum += 500;

            else
                iNum += 1000;
        }

        return iNum;
    }
}
