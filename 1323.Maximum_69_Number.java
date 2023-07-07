import java.lang.Math;
class Solution {
    public int maximum69Number (int num) {
        int iLength = 0;

        int iNum = num;
        while(iNum != 0)
        {
            iNum /= 10;
            iLength++;
        }

        int iAns = 0;

        for(int i = iLength - 1; i >= 0; i--)
        {
            if(num / (int)Math.pow(10,i) == 6)
            {
                iAns += 9 * (int)Math.pow(10,i);
                num = num % (int)Math.pow(10,i);
                iAns += num;

                return iAns;
            }

            iAns += (num / (int)Math.pow(10,i)) * (int)Math.pow(10,i);
            num = num % (int)Math.pow(10, i);
        }

        return iAns;
    }
}
