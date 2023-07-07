class Solution {
    public int minOperations(int[] nums) {
        int iAns = 0;

        for(int i = 0; i < nums.length - 1; i++)
        {
            if(nums[i] >= nums[i + 1])
            {
                iAns += ((nums[i] + 1) - nums[i + 1]);
                nums[i + 1] = nums[i] + 1;
            }
        }

        return iAns;
    }
}
