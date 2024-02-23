class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> vAns = {};
        int iZeros = 0;

        for(int i = 0; i < nums.size(); i++)
        {
            if(nums.at(i) != 0)
                vAns.push_back(nums.at(i));

            else
                iZeros++;
        }

        for(int i = 0; i < iZeros; i++)
            vAns.push_back(0);

        nums = {};
        for(int i = 0; i < vAns.size(); i++)
            nums.push_back(vAns.at(i));
    }
};
