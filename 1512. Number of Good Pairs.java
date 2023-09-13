class Solution {
    public int numIdenticalPairs(int[] nums) {
        Arrays.sort(nums);

        int iAns = 0;
        int iCount = 0;

        for(int i = 1; i < nums.length; i++)
        {
            if(nums[i] == nums[i - 1])
                iCount++;

            else
            {
                for(int j = 1; j <= iCount; j++)
                    iAns += j;

                iCount = 0;
            }
        }

        for(int j = 1; j <= iCount; j++)
            iAns += j;

        return iAns;
    }
}
