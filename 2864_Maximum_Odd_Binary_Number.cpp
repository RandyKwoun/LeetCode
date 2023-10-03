class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int iTemp = -1; //Save the number of number 1

        //Find the number of number 1 
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == '1')
                iTemp++;
        }

        //Save the answer
        string strAns = "";

        //Make the answer
        for(int i = 0; i < s.size() - 1; i++)
        {
            if(i < iTemp)
                strAns += '1';

            else
                strAns += '0';
        }

        //Add 1 on the last so it could be an odd number
        strAns += '1';

        //Return the answer
        return strAns;
    }
};
