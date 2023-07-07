class Solution {
    public int maximizeSum(int[] nums, int k) {
        Arrays.sort(nums);
        int iAns = 0;
        int iNum = nums[nums.length - 1];

        for(int i = 0; i < k; i++)
        {
            iAns += iNum;
            iNum++;
        }

        return iAns;
    }
}
