class Solution {
public:
    int minPartitions(string n) {

        int iAns = 0; //Save the answer

        for(int i = 0; i < n.size(); i++)
        {
            char cTemp = n[i] - 48;

            if(cTemp > iAns)
                iAns = cTemp;
        }

        return iAns;
    }
};
