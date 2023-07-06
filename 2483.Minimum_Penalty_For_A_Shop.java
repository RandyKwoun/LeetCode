class Solution {
    public int bestClosingTime(String customers) {
        int iLct = 0;
        int iMin = Integer.MAX_VALUE;
        int iBasicMin = 0;

        //Calculate the penalty of 0th hour
        for(int i = 0; i < customers.length(); i++)
        {
            if(customers.charAt(i) == 'Y')
                iBasicMin++;
        }

        if(customers.length() == 1)
        {
            if(iBasicMin == 1)
                iLct++;

            return iLct;
        }

        iMin = iBasicMin;

        //Calculate the lowest penlaty w earliest location
        for(int i = 1; i <= customers.length(); i++)
        {
            if(customers.charAt(i - 1) == 'Y')
                iBasicMin--;
            else
                iBasicMin++;

            if(iBasicMin < iMin)
            {
                iMin = iBasicMin;
                iLct = i;
            }
        }

        return iLct;
    }
}
